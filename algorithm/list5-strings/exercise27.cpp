#include <iostream>
using namespace std;

int main() {
    system("clear");
    int i=0, counter;
    string str, rStr;
    
    do {
        cout << "informe um texto com no máximo 40 caracteres: ";
        getline(cin, str);
        counter=0;
        while(str[i++]!='\0')
            counter++;
        if(counter>40)
            cout << counter << "/40"<<"\n";
    }while(counter>40);
    i=0;
    do {
        rStr+=str[str.length()-1-i];
    }while(str[i++]!='\0');

    cout << rStr << "\n\n";
    return 0;
}