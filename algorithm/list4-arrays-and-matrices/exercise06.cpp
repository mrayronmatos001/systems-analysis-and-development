#include <iostream>
using namespace std;

int main() {
    system("clear");
    int A[20], aux=0;
    for(int i=0; i<20; i++) {
        cout << "informe um número inteiro: ";
        cin >> A[i];
    }

    for(int i=0; i<10; i++) {
        aux=A[19-i];
        A[19-i]=A[i];
        A[i]=aux;
    }
    cout << "\n";
    for(int i=0; i<20; i++) {
        cout << A[i] << " ";
    }
    return 0;
}