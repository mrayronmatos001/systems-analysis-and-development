#include <iostream>
using namespace std;

int main() {
    system("clear");
    int A[10], counter=0;
    float P[10];
    for(int i=0; i<10; i++) {
        P[i]=0.5;
    }
    for(int i=0; i<10; i++) {
        cout << "informe um número inteiro: ";
        cin >> A[i];
        if(A[i]%2==0) {
            P[counter]=i;
            counter++;
        }
    }
    cout << "\no vetor desejado é composto de ";
    for(int i=0; i<10; i++) {
        if(P[i]!=0.5) {
            cout << P[i] << " ";
        }
    }
    cout << "\n\n";
    return 0;
}