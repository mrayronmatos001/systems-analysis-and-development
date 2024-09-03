#!/bin/bash
#
# function is empty
#
# author: Ayron Matos
#
# License: GPL
# ---------------------------------

function isEmpty() {

  if [ -z "$1" ]; then
	return 0
  fi

  return 1
}

if isEmpty $1; then
  echo "don't throw arguments"
else
  echo "throw arguments"
fi
