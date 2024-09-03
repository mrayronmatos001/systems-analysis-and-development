#!/bin/bash
# testing vectors

num=(1 2 3 4 5)
echo "${num[*]}"
echo "${num[@]}"
OLDIFS=$IFS
IFS='-'
echo "${num[*]}"
echo "${num[@]}"
echo IFS
echo "$IFS"
IFS=$OLDIFS
echo "$IFS"
OLDIFS='-'
IFS='-'
echo "${num[@]}"
echo "${num[*]}"

langs[0]="shell script"
langs[1]="python"
langs[2]="C"
langs[3]="haskell"

length_v=${#langs[@]}

echo "the vector has $length_v elements"
