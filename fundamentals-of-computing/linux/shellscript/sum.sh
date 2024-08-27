#!/bin/bash
# This script execute the basic functions of a calculator
# PART -> SUM

sum()
	{
		clear
		echo "Enter the first number: "
		read num1
		echo "Enter the second number: "
		read num2
		echo "Answer = $(expr $num1 + $num2)"
		menu
	}
sum

