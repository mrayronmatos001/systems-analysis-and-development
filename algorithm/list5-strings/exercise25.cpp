#include <iostream>
using namespace std;

int main() {
    system("clear");
    int i=0;
    bool isEqual=false;
    string str, rStr;
    cout << "informe um texto qualquer: ";
    getline(cin, str);

    do {
        if(str[i]!=' '&&str[i]!=','&&str[i]!='.'&&str[i]!='?'&&str[i]!='!')
            rStr+=str[i];
    }while(str[i++]!='\0');
    i=0;
    cout << "\n" << str.size();
    cout << "\n" << rStr.size();
    str=rStr;
    do {
        rStr[i]=str[str.length()-2-i];
    }while(rStr[i++]!='\0');
    i=0;
    while(rStr[i]==str[i]) {
        if(rStr[i]=='\0'&&str[i]=='\0')
            isEqual=true;
        i++;
    }
    if(isEqual) 
        cout << "é um palíndromo.";
    else 
        cout << "não é um palíndromo.";
    cout << "\n\n";
    return 0;
}