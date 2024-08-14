#include <iostream>
using namespace std;

int main() {
    system("clear");
    string nStr, tStr;
    cout << "informe a primeira string: ";
    getline(cin, nStr);

    int i=0;
    if(nStr[0]>='A'&&nStr[0]<='Z') {
        do{
            if(nStr[i]>='A'&&nStr[i]<='Z') {
                tStr += nStr[i] + 32;
            } else {
                tStr += nStr[i];
            }
        }while(nStr[i++]!='\0');
    } else {
        do{
            if(nStr[i]>='a'&&nStr[i]<='z') {
                tStr += nStr[i] - 32;
            } else {
                tStr += nStr[i];
            }
        }while(nStr[i++]!='\0');
    }
    cout << "\n" << tStr;
    cout << "\n\n";
    return 0;
}