#include <iostream>
using namespace std;

struct tAnimal {
    string name;
    string breed;
    int age;
};

int main() {
    system("clear");
    int old=0;
    char ask;
    bool isThere=false;
    string breed;
    tAnimal animals[50];
    for(int i=0; i<8; i++) {
        cout << "informe o nome do " << i+1 << "º animal: ";
        getline(cin, animals[i].name);
        cout << "informe a raça: ";
        getline(cin, animals[i].breed);
        cout << "informe a idade: ";
        cin >> animals[i].age;
        if(old<animals[i].age) {
            old=animals[i].age;
        }
        getchar();
        system("clear");
    }

    do {
        cout << "deseja pesquisar pela raça (y-sim, n-não): ";
        cin >> ask;
        getchar();
    }while(ask!='y'&&ask!='n');

    if(ask) {
        cout << "os animais mais velhos são: ";
        for(int i=0; i<8; i++) {
            if(animals[i].age==old)
                cout << "\n" << animals[i].name;
        }

        cout << "\n\ninforme qual raça você deseja pesquisar no banco de dados: ";
        getline(cin, breed);
        cout << "\npara essa raça temos esse nomes e idades: ";
        for(int i=0; i<8; i++) {
            if(animals[i].breed==breed) {
                isThere=true;
                cout << animals[i].name << "\n";
                cout << animals[i].breed << "\n";
            }
        }
        if(!isThere)
            cout << "não há animais para raça informada";
    }

    return 0;
}