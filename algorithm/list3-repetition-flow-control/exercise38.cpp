#include <iostream>
using namespace std;

int main() {
    system("clear");
    int satisfaction, user, studantAge, serviceYears, majorServiceYears, studantCounter=0, peopleCounter=0, satisfactStudantCounter=0,serviceYearsCounter=0, majorServiceYearsQty=0;
    float ageAverage=0;
    do {
        system("clear");
        peopleCounter++;
        do {
            cout << "digite 1-aluno ou 2-funcionário: ";
            cin >> user;
        }while(user!=1&&user!=2);
        cout << "\nGrau de satifacação\tSignificado";
        cout << "\n\t1\t\tSatisfeito";
        cout << "\n\t2\t\tNão Satisfeito";
        if(user==1){
            cout << "\n\ninforme a sua idade: ";
            cin >> studantAge;
            ageAverage+=studantAge;
            studantCounter++;
        } if(user==2) {
            cout << "\n\ninforme o tempo de serviço: ";
            cin >> serviceYears;
            serviceYearsCounter++;
            if(serviceYearsCounter==1){
                majorServiceYears=serviceYears;
            } else if(serviceYears>majorServiceYears) {
                majorServiceYearsQty=0;
                majorServiceYears=serviceYears;
            } else if(serviceYears==majorServiceYears) {
                majorServiceYearsQty++;
            }
        }
        do {
        cout << "\ninforme o grau de satisfação de acordo com a tabela acima: ";
        cin >> satisfaction;
        cout << "\n";
        if(user==1&&satisfaction==1) {
            satisfactStudantCounter++;
        }
        }while(satisfaction!=1&&satisfaction!=2&&satisfaction!=0);
    }while(satisfaction!=0);
    system("clear");
    cout << "alunos satisfeitos " << ((float)satisfactStudantCounter/studantCounter)*100;
    cout << "\nmédia de idade dos alunos: " << ageAverage/studantCounter;
    cout << "\na quantidade de funcionários com maior tempo de serviço é " << majorServiceYearsQty << " sendo o tempo de " << majorServiceYears;
    cout << "\nparticiparam da pesquisa " << peopleCounter - 1 << "\n\n";
    return 0;
}