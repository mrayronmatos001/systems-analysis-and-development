#include <iostream>
using namespace std;

struct client {
    string name;
    int long long cpf;
    int rg;
    int count;
    string openData;
    float amount;
};

int main() {
    system("clear");
    int long long cpf;
    int option, length=0;
    char ask;
    bool isThere;
    client clients[15];
    do {
        system("clear");
        cout << "MENU DE OPÇÕES" << "\n"
             << "==============" << "\n"
             << "1- cadastrar  " << "\n"
             << "2- consultar  " << "\n"
             << "3- relatório c/ saldo (-) " <<"\n"
             << "4- sair       " << "\n"
             << "digite uma opção: ";
        cin >> option;
        switch(option) {
            case 1:
                do {
                    cout << "\ninforme o cpf do " << length+1 << "º cliente: ";
                    cin >> clients[length].cpf;
                    getchar();
                    cout << "informe o nome: ";
                    getline(cin, clients[length].name);
                    cout << "informe o rg: ";
                    cin >> clients[length].rg;
                    cout << "informe o número da conta: ";
                    cin >> clients[length].count;
                    getchar();
                    cout << "informe a data de abertura da conta: ";
                    getline(cin, clients[length].openData);
                    cout << "informe o saldo da conta: ";
                    cin >> clients[length++].amount;
                    cout << "deseja continuar? Y-sim/N-não: ";
                    cin >> ask;
                }while(ask!='N'&&length<15);
                break;
            case 2:
                isThere=false;
                cout << "\ninforme o cpf para buscar no sistema: ";
                cin >> cpf;
                for(int i=0; i<length; i++) {
                    if(cpf==clients[i].cpf) {
                        cout << "nome: " << clients[i].name << "\n"
                             << "rg: " << clients[i].rg << "\n"
                             << "número da conta: " << clients[i].count << "\n"
                             << "data de abertura: " << clients[i].openData << "\n"
                             << "saldo: " << clients[i].amount << "\n\n";
                    }
                }
                if(!isThere)
                    system("read -p 'Usuário não cadastrado! Pressione alguma tecla para continuar...' var");
                else {
                    system("read -p 'Pressione alguma tecla para continuar...' var");
                }
                break;
            case 3:
                cout << "\na disposição dos relatórios com saldo negativo é: \n";
                for(int i=0; i<length; i++) {
                    clients[i].amount<0?clients[i].amount=clients[i].amount:clients[i].amount=-1*clients[i].amount;
                    cout << "nome: " << clients[i].name << "\n"
                         << "rg: " << clients[i].rg << "\n"
                         << "número da conta: " << clients[i].count << "\n"
                         << "data de abertura: " << clients[i].openData << "\n"
                         << "saldo: " << clients[i].amount << "\n\n";
                }
                system("read -p 'Pressione alguma tecla para continuar...' var");
        }
    }while(option!=4);

    return 0;
}