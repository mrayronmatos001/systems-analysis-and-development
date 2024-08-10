#include <iostream>
using namespace std;

int main() {
    system("clear");
    int A[10], B[10], C[10], Asum=0;
    for(int i=0; i<10; i++) {
        cout << "informe um número inteiro: ";
        cin >> A[i] >> B[i];
        C[i]=A[i]+B[i];
        Asum+=A[i];
    }
    cout << "o Vetor C é: ";
    for(int i=0; i<10; i++) {
        cout << C[i] << " ";
    }
    return 0;
}