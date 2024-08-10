#include <iostream>
using namespace std;

int main() {
    system("clear");
    int studant, counter, j=0;
    float average=0;
    char gab1, gab2, gab3, gab4, gab5, gab6, gab7, gab8, gab9, gab10, ans1, ans2, ans3, ans4, ans5, ans6, ans7, ans8, ans9, ans10, asker;

    do {
        cout << "informe o gabarito das questões 1, 2, 3, 4, 5, 6, 7, 8, 9, 10: ";
        cin >> gab1 >> gab2 >> gab3 >> gab4 >> gab5 >> gab6 >> gab7 >> gab8 >> gab9 >> gab10;
    }while(
            (gab1!='a'&&gab1!='b'&&gab1!='c'&&gab1!='d') ||
            (gab2!='a'&&gab2!='b'&&gab2!='c'&&gab2!='d') ||
            (gab3!='a'&&gab3!='b'&&gab3!='c'&&gab3!='d') ||
            (gab4!='a'&&gab4!='b'&&gab4!='c'&&gab4!='d') ||
            (gab5!='a'&&gab5!='b'&&gab5!='c'&&gab5!='d') ||
            (gab6!='a'&&gab6!='b'&&gab6!='c'&&gab6!='d') ||
            (gab7!='a'&&gab7!='b'&&gab7!='c'&&gab7!='d') ||
            (gab8!='a'&&gab8!='b'&&gab8!='c'&&gab8!='d') ||
            (gab9!='a'&&gab9!='b'&&gab9!='c'&&gab9!='d') ||
            (gab10!='a'&&gab10!='b'&&gab10!='c'&&gab10!='d')
    );

    cout << "\ngabarito cadastrado";

    do {
        system("clear");
        counter=0;
        j++;
        do {
        cout << "\n\ninforme o número do aluno e as suas respostas de e 1 a 10: ";
        cin >> studant >> ans1 >> ans2 >> ans3 >> ans4 >> ans5 >> ans6 >> ans7 >> ans8 >> ans9 >> ans10;
        }while(
            (ans1!='a'&&ans1!='b'&&ans1!='c'&&ans1!='d') ||
            (ans2!='a'&&ans2!='b'&&ans2!='c'&&ans2!='d') ||
            (ans3!='a'&&ans3!='b'&&ans3!='c'&&ans3!='d') ||
            (ans4!='a'&&ans4!='b'&&ans4!='c'&&ans4!='d') ||
            (ans5!='a'&&ans5!='b'&&ans5!='c'&&ans5!='d') ||
            (ans6!='a'&&ans6!='b'&&ans6!='c'&&ans6!='d') ||
            (ans7!='a'&&ans7!='b'&&ans7!='c'&&ans7!='d') ||
            (ans8!='a'&&ans8!='b'&&ans8!='c'&&ans8!='d') ||
            (ans9!='a'&&ans9!='b'&&ans9!='c'&&ans9!='d') ||
            (ans10!='a'&&ans10!='b'&&ans10!='c'&&ans10!='d')
        );

        if(ans1==gab1) counter++;
        if(ans2==gab2) counter++;
        if(ans3==gab3) counter++;
        if(ans4==gab4) counter++;
        if(ans5==gab5) counter++;
        if(ans6==gab6) counter++;
        if(ans7==gab7) counter++;
        if(ans8==gab8) counter++;
        if(ans9==gab9) counter++;
        if(ans10==gab10) counter++;

        average+=counter;

        cout << "\no aluno de número " << studant << " acertou " << counter << " questões e errou " << 10-counter;

        cout << "\n\nexite mais algum aluno para verificar? [s-sim/n-não]: ";
        cin >> asker;
    }while(asker!='n');

    cout << "\na média da turma foi de " << (float)average/j << "\n\n";

}