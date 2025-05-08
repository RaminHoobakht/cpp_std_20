#! /bin/bash

clear
ls -ls archive/src_*
echo "enter file number: "
read -r file_no

### ----------------------------------------------

git add --all
git commit -m 'before creating new source file'

### ----------------------------------------------

cp -r src/* archive/src_"$file_no"/
cp -r CMakeLists.txt archive/src_"$file_no"/

cp -r sample/cmake_default.txt CMakeLists.txt
cp -r sample/sample_src/app/* src/app/

### ----------------------------------------------

now="$(date +"%T")"

### ----------------------------------------------

git add --all
git commit -m 'after creating new source file'
