#include <iostream>
using namespace std;

struct tStudant {
    string name;
    int enrollment;
};

struct tSubject {
    int enrollment;
    string subject;
    float grade1;
    float grade2;
    float average;
};

int main() {
    system("clear");
    int j=0, k=0, option, enrollment, sum;
    float average=0;
    string subject;
    tStudant studants[3];
    tSubject subjects[12];
    for(int i=0; i<3; i++) {
        cout << "informe o nome do " << i+1 << "º aluno: ";
        getline(cin, studants[i].name);
        cout << "informe a matrícula: ";
        cin >> studants[i].enrollment;
        getchar();
        system("clear");
    }
    cout << "\nrelatório geral dos alunos: \n\n";
    for (int i=0; i<3; i++) {
        cout << "nome: " << studants[i].name << "\n";
        cout << "matrícula: " << studants[i].enrollment << "\n\n";
    }

    for(int i=0; i<12; i++) {
        if(j>3) {
            k++;
            j=0;
        }
        j++;
        subjects[i].enrollment = k+1;
        cout << "informe a disciplina do aluno " << k+1 << ": ";
        getline(cin, subjects[i].subject);
        cout << "informe a primeira nota do aluno " << k+1 << ": ";
        cin >> subjects[i].grade1;
        cout << "informe a segunda nota do aluno " << k+1 << ": ";
        cin >> subjects[i].grade2;
        subjects[i].average=(subjects[i].grade1+subjects[i].grade2)/2.;
        if(average<subjects[i].average)
            average=subjects[i].average;
        getchar();
        system("clear");
    }

    do {
        system("clear");
        cout << "             MENU PRINIPAL             " << "\n"
             << "---------------------------------------" << "\n"
             << " 1 - EXIBIR DADOS DE UM ALUNO "          << "\n"
             << " 2 - EXIBIR MAIOR MÉDIA "                << "\n"
             << " 3 - EXIBIR MÉDIA DAS MÉDIAS POR ALUNO " << "\n"
             << " 4 - EXIBIR OS ALUNOS DE UMA DISCIPLINA" << "\n"
             << " 5 - SAIR DO SISTEMA "                   << "\n"
             << " informe a opção desejada: ";
        cin >> option;

        switch(option) {
            case 1:
                cout << "\ninforme a matrículo do aluno: ";
                cin >> enrollment;
                for(int i=0; i<3; i++) {
                    if(enrollment==studants[i].enrollment)
                        cout << "\naluno: " << studants[i].name;
                }
                cout << "\n\ndisciplinas: \n";
                for(int i=0; i<12; i++) {
                    if(enrollment==subjects[i].enrollment) {
                        cout << "\n" << subjects[i].subject;
                        cout << "\n" << subjects[i].grade1;
                        cout << "\n" << subjects[i].grade2;
                        cout << "\n" << subjects[i].average << "\n\n";
                    }
                }
                system("read -p '\nPressione aluma tecla para parar...' var");
                break;
            case 2:
                cout << "\n\nmaiores médias: \n";
                for(int i=0; i<12; i++) {
                    
                    if(subjects[i].average==average) {
                        cout << "\n" << studants[subjects[i].enrollment-1].name << "/" << subjects[i].subject;
                    }
                }
                cout << "\n\n";
                system("read -p '\nPressione aluma tecla para parar...' var");
                break;
            case 3:
                cout << "\no ira de cada aluno é: \n\n";
                j=0; 
                k=0;
                sum=0;
                for(int i=0; i<12; i++) {
                    sum+=subjects[i].average;
                    if(j==3){
                        cout << "a média do aluno " << k+1 << ": " << sum/4. << "\n";
                        sum=0;
                        k++;
                    } else if(j>3)
                        j=0;
                    j++;
                }
                cout << "\n\n";
                system("read -p '\nPressione aluma tecla para parar...' var");
                break;
            case 4:
                getchar();
                cout << "\n\ninforme a disciplina desejada: ";
                getline(cin, subject);
                cout << "\nos alunos da disciplina " << subject << ": \n";
                for(int i=0; i<12; i++) {
                    if(subject==subjects[i].subject)
                        cout << "aluno: " << studants[subjects[i].enrollment-1].name << "\n";
                }
                cout << "\n\n";
                system("read -p 'Pressione alguma tecla para continuar...' var");
                break;
        }

    }while(option!=5);
    return 0;
}