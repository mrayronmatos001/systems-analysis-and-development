#include <iostream>
using namespace std;

int main() {
    int num;
    char neighbors;
    cout << "informe um número inteiro qualquer e se deja calcular a soma dos seus antecessores (a) ou sucessores (s): ";
    cin >> num >> neighbors;

    cout << "\no resultado será ";

    if(neighbors=='s') {
        cout << (num + 1) + (num + 2) + (num + 3) + (num + 4) + (num + 5) + (num + 6) + (num + 7) + (num + 8) + (num + 9) + (num + 10);
    } else {
        cout << (num - 1) + (num - 2) + (num - 3) + (num - 4) + (num - 5) + (num - 6) + (num - 7) + (num - 8) + (num - 9) + (num - 10);
    }

    cout << endl << endl;

    return 0;
}