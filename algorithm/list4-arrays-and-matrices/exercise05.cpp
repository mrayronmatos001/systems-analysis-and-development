#include <iostream>
using namespace std;

int main() {
    system("clear");
    int A[20], B[20];
    for(int i=0; i<20; i++) {
        cout << "informe um número inteiro: ";
        cin >> A[i] >> B[19-i];
    }
    cout << "\nos valores do vetor A são: ";
    for(int i=0; i<20; i++) {
        cout << A[i] << " ";
    }
    cout << "\n\nos valores do vetor B são: ";
    for(int i=0; i<20; i++) {
        cout << B[i] << " ";
    }
    cout << "\n\n";
    return 0;
}