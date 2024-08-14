#include <iostream>
using namespace std;

int main() {
    system("clear");
    int i=0, n;
    string str, cStr;

    cout << "informe um texto a ser criptografado: ";
    getline(cin, str);
    cout << "informe o fator de codigicação: ";
    cin >> n;

    do {
        if(str[i]>='a'&&str[i]<='z') {
            cStr+=(str[i] - 32 + n);
        } else if(str[i]==' ') {
            cStr+=' ';
        } else {
            cStr+=str[i] + n;
        }
    }while(str[i++]!='\0');

    cout << cStr << "\n\n";
    return 0;
}