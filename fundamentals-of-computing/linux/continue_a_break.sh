#!/bin/bash
#break and continue

echo "Try to  guess the number"
echo "Tip: It's range into 10 and 50. "

i=1

while true
do
 echo -n  "Type a number: "
 read number
 if [ $number != 30 ]
  then
   echo "You lost. Try again"
   let i++
   continue
 fi

 if [ $number = 30 -a $i = 1 ]
  then
   echo "You got it right in the first time. Congratulations!"
   break
 fi

 if [ $number = 30 ]
  then
   echo "You got right after $i attempts."
   break
 fi

done
