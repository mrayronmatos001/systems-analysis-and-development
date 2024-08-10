#include <iostream>
using namespace std;

int main() {
    int day;
    cout << "informe um dia válido (1-7): ";
    cin >> day;

    cout << endl;

    if(day==1 || day==7) {
        cout << "final de semana";
    } else if(day>1 && day<7) {
        cout << "dia útil";
    } else {
        cout << "dia inválido";
    }

    cout << endl << endl;

    return 0;
}