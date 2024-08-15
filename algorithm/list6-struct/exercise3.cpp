#include <iostream>
using namespace std;

struct client {
    int id;
    string name;
    string address;
    int tel;
};

int main() {
    system("clear");
    client clients[2];
    for(int i=0; i<2; i++) {
        cout << "digite o identificador do cliente " << i+1 << ": ";
        cin >> clients[i].id;
        getchar();
        cout << "digite o nome: ";
        getline(cin, clients[i].name);
        cout << "digite o endereço: ";
        getline(cin, clients[i].address);
        cout << "digite o telefone: ";
        cin >> clients[i].tel;
        getchar();
        system("clear");
    }

    for(int i=0; i<2; i++) {
        cout << "cliente " << i+1 <<": " << "\n"
        << clients[i].id << "\n"
        << clients[i].name << "\n"
        << clients[i].address << "\n"
        << clients[i].tel << "\n";
    }
    return 0;
}