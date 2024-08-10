#include <iostream>
using namespace std;

int main() {
    int enrollment, passedStudentsNum, failedStudentsNum, remediationStudentsNum;
    float average;
    passedStudentsNum = failedStudentsNum = remediationStudentsNum = 0;

    do {
        cout << "\ninforme a matrícula do aluno e a sua média final: ";
        cin >> enrollment >> average;

        if(average<3) {
            failedStudentsNum++;
        } else if(average>=7) {
            passedStudentsNum++;
            if(average>9){
                cout << "\nesse aluno tem média final maior do que 9, sua matrícula é " << enrollment;
                cout << endl;
            }
        } else if(average>=3 && average<7){
            remediationStudentsNum++;
        }
    }while(average>=0);

    cout << endl << endl;
    cout << passedStudentsNum << " aprovados\n" << failedStudentsNum << " reprovados\n" << passedStudentsNum << " em recuperação\n";
    cout << endl << endl;

    return 0;
}