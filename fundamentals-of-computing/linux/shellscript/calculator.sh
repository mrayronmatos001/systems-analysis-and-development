#!/bin/bash
# this script execute basic functions of a calculator:
# sum, subtraction, multiplication and split

clear
menu() 
	{
		echo "         Basic Calculator         "
		echo "    Operations only by integers   "
		echo "----------------------------------"
		echo " Choose one of the options below: "
		echo "----------------------------------"
		echo "   1) Sum                         "
		echo "   2) Subtraction			"
		echo "   3) Multiplication              "
		echo "   4) Split                       "
		echo "   5) Exit                        "
		echo "----------------------------------"
		echo "----------------------------------"

	read opcao
	case $opcao in
		1). sum.sh ;;
		2) sub ;;
		3) mult ;;
		4) spl  ;;
		5) exit ;;
		*)echo "Nonexistent Option" ;;
	esac
menu
}
	sub()
	{
		clear
		echo "Enter the first number: "
		read num1
		echo "Enter the second number: "
		read num2
		echo "Answer = $(expr $num1 - $num2)"
		menu
	}

	mult()
	{
		clear
		echo "Enter the first number: "
		read num1
		echo "Enter the second number: "
		read num2
		echo "Answer = $(expr $num1 \* $num2)"
		menu
	}
	
	spl() 
	{
		clear
		echo "Enter the first number: "
		read num1
		echo "Enter the second number: "
		read num2
		echo "Answer = $(expr $num1 / $num2)"
		menu
	}
menu
