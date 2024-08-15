#include <iostream>
using namespace std;

struct client {
    int code;
    string email;
    int access;
    char page;
};

int main() {
    system("clear");
    const int hoursFix=35, pages=40;
    const float rate=2.5;
    int length=0;
    char ask;
    client clients[500];
    do {
        cout << "informe o código do " << length+1 << " cliente: ";
        cin >> clients[length].code;
        getchar();
        cout << "informe o email: ";
        getline(cin, clients[length].email);
        cout << "informe as horas de acesso: ";
        cin >> clients[length].access;
        cout << "informe se o cliente tem página S-sim/N-não: ";
        cin >> clients[length++].page;
        cout << "informe se deseja continuar Y-sim/N-não";
        cin >> ask;
    }while(ask!='N'&&length<500);
    cout << "\nrelatório de pagamentos: ";
    for(int i=0; i<length; i++) {
        int amount=0;
        if(clients[i].access<=20)
            amount+=hoursFix;
        else
            amount+=hoursFix+rate*(clients[i].access-20);
        if(clients[i].page=='S')
            amount+=pages;
        cout << "\ndébito: " << amount << "\n\n";
    }
    return 0;
}