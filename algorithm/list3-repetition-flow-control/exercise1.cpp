#include <iostream>
using namespace std;

int main() {
    int age, olderAge, youngerAge;
    int olderCod, cod;

    for(int i=0; i<10; i++) {
        cout << "informe o código inteiro e a idade da pessoa " << i+1 << "- ";
        cin >> cod >> age;

        if(i==0) {
            youngerAge = age;
            olderAge = age;
        } else if(age > olderAge){
            olderAge = age;
            olderCod = cod;
        } else if(age < youngerAge){
            youngerAge = age;
        }
    }

    cout << "o código da pessoa mais velha é " << olderCod << " e a idade da pessoa mais nova é " << youngerAge << endl << endl;

    return 0;
}