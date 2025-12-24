
Everything you wanted to know about z88dk paging (segmented memory addresses) but were afraid to ask.
December 10, 2024 D. Rimron-Soutter 3 C, z88dk,

Recently, on discord, RCL asked how one goes about positioning specific files in a fixed location in memory with C, and Allan was kind enough to explain it better and fuller than I’ve ever seen before, so I’ve taken the liberty of transcribing it here – and, thus, from hereon, the words are his, so over to you Allan…

I’m going full bore on this, having been writing it off and on for the past hour. So saddle up, it’s long, sorry 😛

You can place anything anywhere in z88dk. Here are some choices that include more pedestrian ones:

    Keep data in separate files. Load them at runtime. You’ll see many do it this way and it has to do with unfamiliarity with the Next and the tools. That doesn’t always mean it’s a bad choice but you can end up with a lot of files.
    Append all your data to your nex file and load on demand at runtime. Better than (1) in the sense your entire program is now in one file including extra data you may not want in memory.
    Place your data into memory.

z88dk defines sections that correspond to the Next’s (and the 128K’s) memory space. It names the memory in two ways using either BANK or PAGE. BANK is numbered in 16K units like the 128K did. The 128K had BANKS 0-7 and if you are familiar with that, you’ll know that BANK 7 is where the second display file is, BANK 5 is where the first display file is and the initial memory space of a 128K program consists of (in 16K units) ROM, BANK 5, BANK 2, BANK 0. The Next has more memory so it has BANKS 0-7 but also 8-47 (1 MB Next) and 48-111 (2 MB Next). The other view of the same memory is PAGE which maps to how the Next does bankswitching. The same memory space is divided into 8K units. A 16K BANK N corresponds to two 8K PAGES 2N, 2N+1. The Next is able to place individual 8K PAGEs into any of the 8K slots in the Z80’s 64K space. I call those MMU 0 (0-8K), MMU 1 (8K-16K), MMU 2 (16K-24K), … MMU 7 (56K – 64K). The 128K spectrum could only place BANKS 0-7 into the top 16K (MMU 6, MMU 7).

One further meta that z88dk places on this is that BANKs are not allowed to exceed 16K (or 8K) in size. The tools will enforce this by informing you of spillage. Why? The 128K can only place 16K banks in the top 16K of memory. If there is spillage, your program doesn’t see it. The data must be confined to 16K. z88dk can also optionally do 8K checks and for the same reason, this time because the unit of memory is 8K in Next pages. If you want your data to fit into a single 8K page so that you see it all in a single 8K chunk in the 64K space, you can use this to get the tools to tell you that everything fits and is ok.

PAGEs have no checks. You can add as much as you want to a PAGE and the data will just spill to following pages. Clearly if you place 20K into PAGE 10, it will occupy pages 10/11/ part of 12. If you place something else into PAGE 12, there is a conflict and the tool will tell you that. If you place something into the last 12K of PAGE 12 there is no conflict and the tooling is fine with that too.

I’m going to build this from the bottom up to convey some insight into segmented address spaces and how it is solved by z88dk.

This solution applies to all bankswitched targets that z88dk targets, with some additions for the Next specifically.

If you are starting with binary data, it’s much easier to just include the binary into the appropriate memory spot using asm:

In one single asm file:

SECTION BANK_20   ;; place in 16k bank 20, must fit in 16K
                  ;; SECTION BANK_20_H = place in upper 8K of 16K bank 20, must fit in 8K
                  ;; SECTION BANK_20_L = place in lower 8K of 16K bank 20, must fit in 8K
                  ;; SECTION PAGE_40 = place starting in lower 8K of 16K bank 20
                  ;; SECTION PAGE_41 = place starting in upper 8K of 16K bank 20

PUBLIC _hereitis  ;; export the label into the global scope
                  ;; leading underscore makes it accessible from C as well because
                  ;; C adds a leading underscore to names

_hereitis:
   BINARY "...."  ;; the name of the binary file - I think INCBIN works too

Add the asm file to your compile line and z88dk will make a NEX with your stuff in the right place. The name “_hereitis” is globally exported by the PUBLIC directive so you can declare a pointer to it in C:

extern unsigned char hereitis[];    // the name is "_hereitis", C treats data as a char array per the
                                    // declaration and the name is an alias for the memory address due 
                                    // to how C works

If you want to refer to it from asm from any asm file:

EXTERN _hereitis    ;; refer to name in the global scope not necessarily this file

ld hl,_hereitis

Of course any C or asm code referring to hereitis must ensure that that memory bank is paged in before accessing the data.

You can add to the same banks in multiple files. The tool will merge it all together and let you know if there are conflicts. z88dk uses a linking assembler, as you’d expect, so it just packs it all together into the indicated bank without overlap.

What is the memory address? That depends on the ORG of the BANK. The default for BANK_N is 0xc000, BANK_N_L is 0xc000 (the first 8K of the bank), BANK_N_H is 0xe000 (the second 8K of the bank), PAGE_N is 0xc000 for even N and 0xe000 for odd N. This keeps BANK and PAGE org consistent and sensible for a 128K Spectrum. So the _hereitis label as defined above will be in the top 16K of the address range and your program would have to page that stuff into the top 16K before using it.

You can change the default org of any banks with a pragma (but there is a much better way):

#pragma output CRT_ORG_BANK_20 = 0x2000

Now anything assigned to BANK_20 will have addresses starting in the 0x2000 range so your program should bank this memory into MMU 1 / MMU 2 to address it properly. This org change does not apply to the other sections mentioned :- BANK_20_L, BANK_20_H, PAGE_40, PAGE_41 they have their own ORG which you must change individually, also via pragma if you want to.

This pragma can appear on the compile line but that is the wrong way to go. If you use pragmas, collect them in a single file. I usually call it “zpragma.inc” and then put that file on the compile line. You can create a long list of pragmas in such a file and comment them so you know what they are doing.

Since a BANK is 16K in size, the memory placement within the 16K bank only depends on the bottom 14 bits of the ORG address. If your ORG is 0x4200 then your data appears at offset 0x200 in the 16K bank but memory address labels will be at 0x4200. Your program is expected to place that memory at address 0x4000 before accessing it to make the label address valid. PAGEs are 8K in size so the bottom 13 bits of the ORG tell what the offset into the page is for the data. It is possible to have many org for a particular bank and the lower bits will determine where stuff goes in the bank/page. The tool will tell you if there is conflict. The memory address labels will reflect the full 16-bits of the ORG address so your program must ensure the bank/page is mapped into the correct slots in the 64K space before accessing. I went into a lot of detail there to help you understand the underlying banking mechanism. It reflects exactly how bankswitching is done in a segmented memory space like the Next’s (or the 128K’s). The z80 has a 64K address space and addresses are 16-bit. All labels generated by the compiler or assembler are 16-bit and refer to an address in that 64K space. Your BANK or PAGE data is a 16K or 8K container with an ORG address. The lower bits define where within that 16K / 8K container that data is placed. The rest of the bits decide which memory slot in the z80’s 64k space that bank or page should be placed with MMU before accessing.

And lastly I’ll describe the recommended way to precisely handle placement of stuff in memory. Make your own memory map. The names BANK_20, BANK_20_L, BANK_20_H, PAGE_40, PAGE_41 are special reserved works in the z88dk toolchain for the Next target. You can use them as a prefix to define your own memory section. Eg, BANK_20_MYSTUFF will be understood by z88dk to mean this is your own section name but it’s in BANK 20. Each section can have its own org.

Here’s an example memory map which would be placed in a fixed file mmap.inc. A pragma tells z88dk to use this file to augment its memory map:

SECTION BANK_20_MAIN
org 0x2000
SECTION BANK_20_WHY_I_DO_THIS
org 0xff00

You can add as many sections as you want.

The section BANK_20_MAIN has org at 0x2000 so it’s expecting BANK 20 to be paged into the z80 memory space at 0x2000 (mmu 1, maybe mmu 2 if more than 8K data) before accessing stuff placed there. That stuff is placed at offset 0x0000 in the bank, determined by the lower 14 bits of the org address. Section BANK_20_WHY_I_DO_THIS will be stored inside BANK 20 starting at offset 0x3f00 (only 256 bytes are left before spilling outside the bank which will be caught by the toolchain). Its org indicates that address labels expect BANK 20 to be paged into the top 16K of the z80’s address space before accessing. The offset is in the top 8K of BANK 20 so you could get away with paging in PAGE 41 into mmu 7 before accessing.

On the spectrum next you can do this mapping simultaneously. MMU1 = PAGE 40, MMU 2 = PAGE 41 (for accessing BANK_20_MAIN stuff). MMU 7 = PAGE 41 (for accessing BANK_20_WHY_I_DO_THIS stuff). 

Conventional tooling works this way… they are based on linking assemblers which either link statically (like this) or dynamically (they put in stubs that are patched with addresses at load time). Where stuff is placed in memory is determined by a memory map passed to the linker at build time. How the memory map is defined is tool specific but it is always there somewhere. This has been the norm since the 60s for all types of targets :- 8 bit and up.

And now to put it all together with specific information for the Next (and 128K).

Next programs (and 128K programs) are launched from the starting memory configuration of ROM, BANK 5, BANK 2, BANK 0 (16K units). z88dk has this idea of “main binary”. If your code or data is not assigned to any memory bank, it ends up in the main binary with default org of 0x8000 (unless it’s a dot command). This is the part that runs after the program is loaded (from tap, from sna, from snx, from z80, from nex) and the initial memory space has this part of the program visible when your program starts at main(). The main binary has its default org (0x8000 mentioned which is a magic number for the spectrum just outside contended memory space) and a default stack location (the top of memory normally). You can change those with pragmas as usual. Anything in the main binary is placed into BANK 5, BANK 2, BANK 0 as if they were connected, ie they spill together because the view of memory is the 64K address space of the z80. With an ORG of 0x8000, you’re placing starting in BANK 2.

All the stuff assigned to other memory banks, if we’re speaking about NEX, is loaded by the nex loader dot command before starting the program. So the stuff is there but your program must do the banking to access it. You can still assign to specific memory banks in the “main binary” separately. You can place stuff in BANK 5, eg, if you want a starting ula screen. If there is conflict with the main binary, the tool will tell you.

You place stuff into the memory map by specifying section names as defined in the map. Some of those are defined by z88dk and you can add more of your own to a mmap.inc file to augment the memory map. The above showed examples of adding things to sections in asm. You can also do this from C.

The default C compile is placing stuff in the “main binary” however you can redirect where stuff goes by section name. The C compiler divides its output into a code segment (where generated code goes), a bss segment (where uninitialized variables go), a data segment (where initialized variables go) and a rodata segment (where const variables go). z88dk also defined an smc segment for self-modifying code but that’s not supported by the c compilers. This division of output is important when z88dk builds output as it may have to build roms, eg, which means bss is in ram, data is in rom but must be decompressed into ram, code is in rom, smc is like data that must be decompressed into ram, etc. The default section names the C compiler uses are in the main binary portion of the memory map. Incidentally, you can add your asm to the main binary as well by using the appropriate section names. The crt (the startup code) is responsible for doing this initialization. A crt for rom destined code would be zeroing the bss area in ram, decompressing initialized data from rom into ram, decompressing smc code from rom into ram before starting main(). For code just going into ram, like for the spectrum, the crt does none of these things by default. A zeroed bss, initialized data in memory, etc, are just loaded as part of the program.

Each individual invocation of the C compiler can assign section names to the C compiler’s output so you can change its output by redirecting to a specific section like BANK_20. You do that by assigning section names on the compile line. sdcc is not able to redirect bss (its sectioning system is really messed up due to being initially an 8051 compiler) and that’s why it is always recommended to declare variables in asm rather than C if placing in banks. sccz80, another C compiler with z88dk, can target all segments. sdcc can redirect the code segment with --codesegBANK_20, data segment with --datasegBANK_20, rodata segment with --constsegBANK_20 on the compile line. sccz80 adds --bsssegBANK_20 for the bss segment.

So the steps in your build are these:

Compile C to an object file (-c), one compile line per set of C code going to the same banks. Then build the result in a final compile that gathers the object files (which include bank assignment), asm, whatever else for creating a nex (or whatever). For your specific question about having your data in a C file (and again, I recommend just doing it in asm with a binary include): If your declaration is const unsigned char mypic[] = ... then it’s destined for an rodata segment (read only data, safe for rom). If your declaration is unsigned char mypic[] = ... then it’s destined for a data segment (read/write, must be ram). You would place it in a specific memory bank by compiling to an object file specifying the correct section names:

zcc +zxn -c -clib=sdcc_iy -SO3 --max-allocs-per-node200000 --datasegBANK_20 --constsegBANK_20 mypic.c

(the code segment and bss segment are not redirected so anything there is headed for the main binary) Then you add that object file to the final compile line that builds the nex:

zcc +zxn -startup=31 -clib=sdcc_iy -SO3 --max-allocs-per-node200000 main.c mypic.o other.asm -subtype=nex -Cl"--clean" -create-app

Your build script (whether batch file or makefile) would go through these steps. If you have a long list of files to add to a compile line, use a .lst file which contains a list of files to compile. A more than trivial example (but not too much more) is the playvid dot command:

https://gitlab.com/thesmog358/tbblue/-/tree/master/src/c/DotCommands/playvid?ref_type=heads

The build script is a windows bat: https://gitlab.com/thesmog358/tbblue/-/blob/master/src/c/DotCommands/playvid/build.bat?ref_type=heads

The first step compiles some code destined to main memory at 0x8000 (the main binary of a dot program is normally located at 0x2000).

The second step makes the final dot command taking the object file output from the first step and combining with more c and asm files going to the main binary at 0x2000.

About the binary output – this type of output is a dotn, something defined by z88dk as a dot command larger than 8K. What z88dk does is generate the first 8K as normal and then it appends extra banks in 8K (or 16K? can’t recall) blocks. So the dot command itself will be larger than 8K. NextZXOS only loads the first 8K but the crt code that z88dk provides will load the rest into memory banks from the stuff appended to the 8K.

The next steps are building the asm players individually. These players are appended to the dot command and the dot command determines which player to use, then loads it into memory before playing the video.

You can see the two .lst files which list all source files for a particular zcc invoke and the zpragma.inc which is used in the binary build step to control some details of the compile.

mmap.inc is also there defining some new sections for the memory map. It does not contain any BANK stuff so these sections are part of the “main binary”. Normally that is the 0x2000 area for a dot command but these are added to 0x8000 in main memory. The pragmas in zpragma.inc are making sure the dot command is loaded with allocated memory banks at 0x8000 so as not to interfere with basic. This is a requirement of dot commands and not nex files. nex programs aren’t intended to coexist with basic so you just take whatever memory you want.

MERRY CHRISTMAS GUYS. And sorry, it just kept on going 😄
