#!/bin/bash

expr 7 \* 2

expr 1 + 1

echo "scale=2; 7*5/3" | bc

num=5
echo "scale=2; ((3+2)*$num+4)/3" | bc

echo $(cut -d ' ' -f3 nums.txt | tr '\n' +)0 | bc

echo $[2#11]
echo $((16#a))
echo $((2#11 + 16#a))

expr length 1234

var=0123456789
echo ${#var}

expr substr 5678 2 3

var="que teste chato"
echo ${var:10:5}

expr index 5678 7
