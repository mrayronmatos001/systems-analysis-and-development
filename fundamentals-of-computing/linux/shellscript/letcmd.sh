#!/bin/bash
#command let

num=102
let num++
echo $num
num=$[$num+1]
echo $num
num=$((num+1))
echo $num
let num=num+1
echo $num
let num+=4
echo $num
