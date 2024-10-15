#!/bin/bash

var='a          b'
echo $var

var=' a b'
echo $var

echo *

echo \\

echo "\"

echo This  is  not  how  you  write  a  spaced-out  line.

echo "This  is  how  you  write  a  spaced-out  line."

echo "The name of this computer is `uname -n`"

dir=pwd
echo $dir

dir=`pwd`
echo $dir

echo "The name of this computer is $(uname -n)"

ls *
ls [Pp]*
ls [c-ms-z]*o
ls param?
ls ?aram?
ls [!lpt]*o
ls [apt][ae][dls]*
ls *[aeiou]*
ls *[!4-6]
ls *te[!s]*
