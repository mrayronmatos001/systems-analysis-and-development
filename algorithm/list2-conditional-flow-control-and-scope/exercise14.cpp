#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "informe 3 números inteiros quaisquer: ";
    cin >> a >> b >> c;

    cout << endl;

    if(a==b && a==c) {
        cout << "todos os números são iguais";
    } else if (a==b || a==c || b==c) {
        cout <<"apenas dois números são iguais";
    } else {
        cout <<"todos os números são diferente";
    }

    cout << endl << endl;

    return 0;
}