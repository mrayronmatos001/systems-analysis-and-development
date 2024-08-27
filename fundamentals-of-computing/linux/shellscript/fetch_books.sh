#!/bin/bash
#
# Fetch for a quantity of books
# -----------------------------

echo -n "Which book do you want? "
read book

if grep "$book" books.txt >>/dev/null
  then echo "The book $book has $(grep "book" books.txt | cut -f2) exemplarys."
  else echo "This book isn't in the list"
fi
