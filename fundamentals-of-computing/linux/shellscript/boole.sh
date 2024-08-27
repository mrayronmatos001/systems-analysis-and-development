#!/bin/bash
# boolean operators

read -p "Enter a number and a letter: " number letter
if [[ ( "$number" -gt 0 &&  "$number" -lt 10 ) ||  ( "$letter" = "v" ) ]]
then
	echo "guessed the range of number or letter"
else
	echo "both infos are wrong"
fi
