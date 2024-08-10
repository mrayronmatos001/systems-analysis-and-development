#include <iostream>
using namespace std;

int main() {
    system("clear");
    int M[6][6], V[36], A, counter=0;
    cout << "informe um valor A: ";
    cin >> A;
    cout << "\n";
    for(int i=0; i<6; i++) {
        for(int j=0; j<6; j++) {
            cout << "informe um número: ";
            cin >> M[i][j];
            V[counter]=M[i][j]*A;
            counter++;
        }
    }

    cout << "\na matriz V é composta por: ";
    for(int i=0; i<36; i++) {
        cout << V[i] << " ";
    }
    cout << "\n\n";
    return 0;
}