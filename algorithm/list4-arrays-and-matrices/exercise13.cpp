#include <iostream>
using namespace std;

int main() {
    system("clear");
    int N, X, aux=0;
    bool isThere=false;
    cout << "informe um número N ";
    cin >> N;
    int V[N], C[N];
    V[0]=N;
    for(int i=1; i<N; i++) {
        V[i] = V[i-1]*2;
    }

    cout << "\ninforme um número inteiro X ";
    cin >> X;
    for(int i=0; i<N; i++) {
        C[i]=V[i];
        if(V[i]==X) {
            isThere=true;
            aux=X;
            X=V[0];
            V[0]=aux;
        }
    }
    if(isThere) {
        cout << "\n\no vetor original é ";
        for(int i=0; i<N; i++) {
            cout << C[i] <<  " ";
        }
        cout << "\n\no vetor derivado é ";
        for(int i=0; i<N; i++) {
            cout << V[i] << " ";
        }
    } else {
        cout << "esse número não existe no vetor";
    }
    cout << "\n\n";
    return 0;
}