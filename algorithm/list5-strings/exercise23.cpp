#include <iostream>
using namespace std;

int main() {
    system("clear");
    int i=0;
    bool isEqual = false;
    string str1, str2;

    cout << "informe um texto: ";
    getline(cin, str1);
    cout << "informe um segundo texto: ";
    getline(cin, str2);
    while(str1[i]==str2[i]) {
        if(str1[i]=='\0'&&str2[i]=='\0')
            isEqual = true;
        i++;
    }
    if(isEqual) {
        cout << "iguais";
    } else {
        cout << "diferentes";
    }
    cout << "\n\n";
    return 0;
}