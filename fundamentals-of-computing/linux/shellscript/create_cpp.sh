#!/bin/bash

FILE_NAME=${1:-cplusplus.cpp}

cat << EOL > "$FILE_NAME"
#include<iostream>
using namespace std;

int main() {
  cout << "Hello world!" << endl;
  return 0;
}

EOL

echo "CPP file '$FILE_NAME' created successfully"
