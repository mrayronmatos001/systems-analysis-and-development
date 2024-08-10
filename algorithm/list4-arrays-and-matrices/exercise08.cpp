#include <iostream>
using namespace std;

int main() {
    system("clear");
    int A[10], B[12], counter=0;
    float C[10];
    bool isThere;
    for(int i=0; i<10; i++) {
        C[i] = 0.5;
    }
    for(int i=0; i<10; i++) {
        cout << "informe um número inteiro: ";
        cin >> A[i];
    }
    for(int i=0; i<12; i++) {
        cout << "informe um número inteiro: ";
        cin >> B[i];
    }
    for(int i=0; i<10; i++) {
        for(int j=0; j<12; j++) {
            if(A[i]==B[j]) {
                isThere=false;
                for(int z=0; z<10; z++) {
                    if(C[z]==A[i]) {
                        isThere=true;
                    }
                }
                if(isThere==false) {
                    C[counter]=A[i];
                    counter++;
                }
            }
        }
    }
    cout << "o cojuntos dos números que são iguais para ambos os vetores foi de: ";
    for(int i=0; i<10; i++) {
        if(C[i]!=0.5) {
            cout << C[i] << " ";
        }
    }
}