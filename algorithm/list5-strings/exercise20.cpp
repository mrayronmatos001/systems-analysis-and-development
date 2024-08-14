#include <iostream>
using namespace std;

void reversor(string name, string *fullName);
string wordCutter(string name);

int main() {
    system("clear");
    string fullName, name, firstName, lastName;

    cout << "informe seu nome completo: ";
    getline(cin, fullName);

    firstName = wordCutter(fullName);
    reversor(fullName, &fullName);
    lastName = wordCutter(fullName);
    reversor(lastName, &lastName);
    
    cout << lastName << ", " << firstName << ".\n\n";
    return 0;
}

void reversor(string name, string *fullName) {
    string reverseStr;
    reverseStr = name;
    for(int i=0; i<name.size(); i++) {
        reverseStr[(name.size()-1)-i]=name[i];
    }
    *fullName = reverseStr;
}

string wordCutter(string name) {
    int i=0;
    string returnName;
    while(name[i]!=' '&&name[i]!='\0') {
        returnName+=name[i++];
    }
    return returnName;
}