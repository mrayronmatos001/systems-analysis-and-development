#include <iostream>
using namespace std;

struct address {
    string street;
    int number;
    string neighborhood;
    string city;
    string state;
};

struct people {
    string name;
    string address;
    int tel;
    int age;
};

int main() {
    system("clear");
    int length=0, j, k;
    char ask;
    bool found;
    people ppls[10];
    address adrs;
    do {
        cout << "informe o nome da " << length+1 << "º pessoa: ";
        getline(cin, ppls[length].name);
        cout << "informe o endereço: ";
        getline(cin, ppls[length].address);
        cout << "informe o número: ";
        cin >> ppls[length].tel;
        cout << "informe a idade: ";
        cin >> ppls[length++].age;
        cout << "informe se deseja continuar S-sim/N-não: ";
        cin >> ask;
        getchar();
    }while(ask!='N'&&length<10);
    cout << "\ninforme uma rua: ";
    getline(cin, adrs.street);
    cout << "informe um número: ";
    cin >> adrs.number;
    getchar();
    cout << "informe um bairro: ";
    getline(cin, adrs.neighborhood);
    cout << "informe uma cidade: ";
    getline(cin, adrs.city);
    cout << "informe um estado: ";
    getline(cin, adrs.state);
    cout << "as pessoas com o bairro equivalente ao informado em endereço são: \n";
    for(int i=0; i<length; i++) {
        j=0;
        k=0;
        found=false;
        do {
            if(ppls[i].address[j]==adrs.neighborhood[k]) {
                do {
                    k++;
                    if(adrs.neighborhood[k]=='\0')
                        found=true;
                }while(ppls[i].address[++j]==adrs.neighborhood[k]);
            }
            k=0;
        }while(ppls[i].address[j++]!='\0'&&!found);
        if(found) 
            cout << ppls[i].name << "\n";
    }
    return 0;
}