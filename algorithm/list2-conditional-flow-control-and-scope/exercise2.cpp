#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "informe um número inteiro qualquer: ";
    cin >> num;

    cout << endl;

    if(num%2==0) {
        cout << "é par e ";

        if(num>100) {
            cout << "é maior do que 100\n";
        } else {
            cout << "não é maior do que 100\n";
        }
    } else {
        cout << "é ímpar e ";

        if (num>=0) {
            cout << "é positivo\n";
        } else {
            cout << "é negativo\n";
        }
    }

    cout << endl << endl;

    return 0;
}