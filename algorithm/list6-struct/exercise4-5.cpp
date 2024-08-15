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
    int stop=0, i=0, option, id;
    char ask;
    bool isThere;
    client clients[20];
    do {
        cout << "digite o identificador do cliente " << i+1 << ": ";
        cin >> clients[i].id;
        getchar();
        cout << "digite o nome: ";
        getline(cin, clients[i].name);
        cout << "digite o endereço: ";
        getline(cin, clients[i].address);
        cout << "digite o telefone: ";
        cin >> clients[i].tel;
        stop++;
        cout << "\ndeseja continuar o cadastro? digite S-sim ou N-não ";
        cin >> ask;
        system("clear");
    }while(ask!='N'&&stop<20);
    cout << "\n";
    do {
        system("clear");
        cout << "MENU DE OPÇÕES" << "\n"
             << "==============" << "\n"
             << "1 - Relatório " << "\n"
             << "2 - Consultar " << "\n"
             << "3 - sair      " << "\n"
             << "digite uma opção: ";
        cin >> option;
        switch(option) {
            case 1:
                cout << "\n";
                for(int i=0; i<stop; i++) {
                    cout << "cliente " << i+1 <<": " << "\n"
                         << clients[i].id << "\n"
                         << clients[i].name << "\n"
                         << clients[i].address << "\n"
                         << clients[i].tel << "\n\n";
                    system("read -p 'Pressione qualquer tecla para continuar...' var");
                }
                break;
            case 2:
                isThere=false;
                cout << "\ninforme a identidade do cliente para fazer a consulta: ";
                cin >> id;
                cout << "\n";
                for(int i=0; i<stop; i++) {
                    if(id==clients[i].id) {
                        cout << "cliente " << i+1 <<": " << "\n"
                             << clients[i].id << "\n"
                             << clients[i].name << "\n"
                             << clients[i].address << "\n"
                             << clients[i].tel << "\n\n";
                        isThere=true;
                        system("read -p 'Pressione qualquer tecla para continuar...' var");
                        break;
                    }
                }
                if(!isThere) {
                    system("read -p 'Cliente não cadastrado! \nPressione qualquer tecla para continuar...' var");
                }
        }
        cout << "\n";
    }while(option!=3);
    return 0;
}