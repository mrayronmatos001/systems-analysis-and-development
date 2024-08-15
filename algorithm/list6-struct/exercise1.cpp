#include <iostream>
using namespace std;

struct studant {
    int enrollment;
    string name;
    string address;
    float average;
};

int main() {
    system("clear");
    studant studants[10];
    for(int i=0; i<10; i++) {
        cout << "informe a matrícula do " << i+1 << "º aluno: ";
        cin >> studants[i].enrollment;
        getchar();
        cout << "informe o nome: ";
        getline(cin, studants[i].name);
        cout << "informe o endereço: ";
        getline(cin, studants[i].address);
        cout << "informe a média: ";
        cin >> studants[i].average;
        if(studants[i].average>5&&studants[i].average<=9.5) 
            studants[i].average += 0.5;
        else if(studants[i].average>9.5){
            studants[i].average=10;
        }
        system("clear");
    }

    for(int i=0; i<10; i++) {
        cout << "dados do aluno " << studants[i].name << ": ";
        cout << "\nmatrícula: " << studants[i].enrollment;
        cout << "\nendereço: " << studants[i].address;
        cout << "\nmédia: " << studants[i].average << "\n\n";
    }
    return 0;
}