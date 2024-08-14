#include <iostream>
using namespace std;

int main() {
    system("clear");
    int i=0, counter=1;
    string str, aux;

    cout << "informe um texto qualquer: ";
    getline(cin, str);

    do {
        aux+=str[i];
        if(str[i]==' ') {
            if(counter%2!=0) 
                cout << "\n" << counter << "º "<< aux;
            aux="";
            counter++;
        }
    }while(str[i++]!='\0');
    cout << "\n\n";
    return 0;
}