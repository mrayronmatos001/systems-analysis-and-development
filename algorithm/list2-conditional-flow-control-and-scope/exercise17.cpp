#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "informe um número inteiro qualquer: ";
    cin >> num;

    cout << endl;

    if (num%2==0) {
        if(num>=10 && num%10==0) {
            cout << "o número é múltiplo de 10";
        } else {
            cout << "o número não é múltiplo de 10";
        }
    } else {
        if(num>=5 && num%5==0) {
            cout << "o número é divisível por 5";
        } else {
            cout << "o número não é divisível por 5";
        }
    }

    cout << endl << endl;

    return 0;
}