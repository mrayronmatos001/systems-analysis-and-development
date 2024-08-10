#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    system("clear");
    srand(time(0));
    int M[30][30], X[30][30], A, equal=0;
    cout << "informe um valor A ";
    cin >> A;
    for(int i=0; i<30; i++) {
        for(int j=0; j<30; j++) {
            X[i][j]=M[i][j]=rand()%100;
            if(M[i][j]==A) {
                X[i][j]=0;
                equal++;
            }
        }
    }
    cout << "\nforma encontrados " << equal << " iguais";
    cout << "\n\nMatriz M: \n";
    for(int i=0; i<30; i++) {
        cout << "| ";
        for(int j=0; j<30; j++) {
            cout << M[i][j] << " ";
        }
        cout << "|\n";
    }
    cout << "\nMatriz X: \n";
    for(int i=0; i<30; i++) {
        cout << "| ";
        for(int j=0; j<30; j++) {
            cout << X[i][j] << " ";
        }
        cout << "|\n";
    }
    cout << "\n\n";
    return 0;
}