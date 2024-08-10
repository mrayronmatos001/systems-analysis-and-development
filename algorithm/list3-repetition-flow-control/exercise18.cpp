#include <iostream>
using namespace std;

int main() {
    int n, sum=0; 
    char ask;

    do {
        cout << "\ninforme um número: ";
        cin >> n;

        sum = sum*10;
        sum += n;

        cout << "Deseja parar[s/n]: ";
        cin >> ask;
    }while(ask!='s'||ask=='n');

    cout << "O número formado pelos dígitos é " << sum << "\n\n";

    return 0;
}