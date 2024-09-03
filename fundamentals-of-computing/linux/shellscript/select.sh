#!/bin/bash
#
# Using the select command to creat a menu
#
# author: Ayron Matos
#
# License: GPL
# -------------------------------------------

langs=("python" "shell" "haskell" "exit")

select option in "${langs[@]}"
do
  case $option in
	"python")
	  echo "You chose the python language"
	  ;;
	"shell")
	  echo "You chose the shell language"
	  ;;
	"haskell")
	  echo "You chose the haskell language"
	  ;;
	"exit")
	  break
	  ;;
	*) echo "invalid option";;
  esac
done

