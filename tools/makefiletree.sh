#!/bin/bash
echo "Построение дерева каталогов со ссылками."
{
  echo "## Дерево каталогов"
  echo
  echo "<pre>"
  tree -nvf --dirsfirst -I "*.gem|*.lock|*.zip|_site*" --noreport | grep / | grep -v ".git" 
  echo "</pre>"
} >DIRECTORY-TREE.md
sed -i -e "s/\xC2\xA0/ /g" -e "s/   /  /g" -e "s/──/─/g" DIRECTORY-TREE.md
find . -mindepth 1 -type f,d | sort -r | while read -r file; do
  echo "Обработка: \\$file >> ${file#*/} >> ${file##*/}"
  sed -i "s|\\$file|<a href='${file#*/}'>${file##*/}<\/a>|g" DIRECTORY-TREE.md
done