#!/bin/bash
# testing vectors

num=(1 2 3 4 5)
echo "${num[*]}"
echo "${num[@]}"
OLDIFS=$IFS
IFS='-'
echo "${num[*]}"
echo "${num[*]}"
echo IFS
echo "$IFS"
IFS=$OLDIFS
echo "$IFS"
