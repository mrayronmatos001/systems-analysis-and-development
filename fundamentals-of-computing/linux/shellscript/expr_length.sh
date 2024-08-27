#!/bin/bash
#expr length

read -s -p 'type the password: ' password
comp=$(expr length $password)

if [ "$comp" -lt 6 -o "$comp" -gt 9 ]
 then
	echo "invalid password"
	echo "for safe it's not accepted password with less than 6 caracteres"
	echo "or greater than 9"
	echo "enter a new password"
 else
	echo "password is valid"
fi
