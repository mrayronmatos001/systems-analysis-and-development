#include <iostream>
using namespace std;

int main() {
    system("clear");
    int a, b, pow=1;
    char ask;

    do {
        system("clear");
        pow=1;
        cout << "\ninforme um número A e um número B: ";
        cin >> a >> b;

        for(int i=0; i<b; i++) {
            pow *= a;
        }

        if(a < 0) {
            a = -1 * a;
        }

        if(b < 0) {
            b = -1 * b;
        }

        cout << "\na potência é " << pow;
        cout << "\na soma dos módulos é " << a + b << "\n\n";

        cout << "deseja continuar? [s-sim, n-não]: ";
        cin >> ask;
    }while(ask!='n');

    system("clear");
    cout << "Encerrando programa...finalizado.\n\n";

    return 0;
}