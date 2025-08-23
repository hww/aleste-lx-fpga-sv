#!/bin/bash
awk '{count[$0]++} END{for(line in count) print "["count[line]" lines] "line}' "$1"
