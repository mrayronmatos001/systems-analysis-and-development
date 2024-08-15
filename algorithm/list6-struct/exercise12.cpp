#include <iostream>
using namespace std;

struct client {
    int bankCode;
    int branchCode;
    int countCode;
    string name;
    int password;
    int amount;
};

int main() {
    system("clear");
    int length, option, count, password, a, deposit, withdraw;
    char ask,ask2, into;
    bool isThereCount, checked;
    client clients[1000];

    do {
        cout << "informe o número do banco do clinente " << length+1 << ": ";
        cin >> clients[length].bankCode;
        cout << "informe o número da agência: ";
        cin >> clients[length].branchCode;
        cout << "informe o número da conta: ";
        cin >> clients[length].countCode;
        getchar();
        cout << "informe o nome: ";
        getline(cin, clients[length].name);
        cout << "informe a senha: ";
        cin >> clients[length].password;
        cout << "informe o saldo: ";
        cin >> clients[length].amount;

        cout << "informe se deseja continuar. S-sim/N-não: ";
        cin >> ask;
    }while(length++<1000&&ask!='N');

    do {
        system("clear");
        cout << "deseja logar? S-sim/N-não: ";
        cin >> into;
        if(into=='S') {
            do {
                isThereCount=false;
                checked=false;
                ask2='N';
                do {
                    cout << "informe o número da conta: ";
                    cin >> count;
                    for(int i=0; i<length; i++) {
                        if(clients[i].countCode==count) {
                            isThereCount=true;
                            a=i;
                        }
                    }
                    if(isThereCount) {
                        cout << "informe a senha: ";
                        cin >> password;
                        if(clients[a].password==password)
                            checked=true;
                        else {
                            cout << "senha inválida. deseja sair? S-sim/N-não: ";
                            cin >> ask2;
                        }
                    } else {
                        cout << "conta não cadastrada no sistema. deseja sair? S-sim/N-não: ";
                        cin >> ask2;
                    }
                    if(ask2=='S')
                        option=4;
                }while(ask2!='S'&&!checked);
                
                do {
                    if(checked) {
                        system("clear");
                        cout << "     MENU DO BANCO     " << "\n"
                             << "-----------------------" << "\n"
                             << " 1 - CONSULTAR SALDO   " << "\n"
                             << " 2 - REALIZAR DEPÓSITO " << "\n"
                             << " 3 - REALIZAR SAQUE    " << "\n"
                             << " 4 - VOLTAR PARA TELA ANTERIOR" << '\n'
                             << " digite uma opção: ";
                        cin >> option;
                    }
                
                    switch(option) {
                        case 1:
                            cout << "\nsaldo: " << clients[a].amount << "\n\n";
                            system("read -p 'Pressione alguma tecla para continuar...' var");
                            break;
                        case 2:
                            deposit=0;
                            cout << "\nqual valor deseja depositar: ";
                            cin >> deposit;
                            clients[a].amount+=deposit;
                            cout << "deposito realizado com sucesso! '\n\n";
                            system("read -p 'Pressione alguma tecla para continuar...' var");
                            break;
                        case 3:
                            cout << "\nqual valor deseja sacar: ";
                            cin >> withdraw;
                            if(withdraw<=clients[a].amount){
                                clients[a].amount-=withdraw;
                                cout << "saque realizado com sucesso! \n\n";
                            } else
                                cout << "valor na conta menor do que deseja sacar!\n\n";
                            system("read -p 'Pressione alguma tecla para continuar...' var");
                    }
                }while(option!=4);
            }while(option!=4);
        };
    }while(into!='N');

    cout << "\nsistema finalizado. \n\n";
}