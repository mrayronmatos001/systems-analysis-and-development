#include <iostream>
using namespace std;

int main() {
    int age, serviceYears;
    cout << "informe a idade e o tempo de serviço do trabalhador: ";
    cin >> age >> serviceYears;

    cout << endl;

    if(age>=65 || serviceYears>=30 || (age>=60 && serviceYears>=25)) {
        cout << "pode.";
    } else {
        cout << "não pode.";
    }

    cout << endl << endl;

    return 0;
}