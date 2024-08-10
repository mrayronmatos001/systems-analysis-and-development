#include <iostream>
using namespace std;

int main() {
    system("clear");
    int M[6][6], a, aux;
    for(int i=0; i<3; i++) {
        a=0;
        cout << "| ";
        for(int j=0; j<3; j++) {
            a++;
            if(a>i+1)a=i+1;
            M[i][j]=a;
            cout << M[i][j] << " ";
        }
        for(int j=3; j<6; j++) {
            M[i][j]=M[i][5-j];
            cout << M[i][j] << " ";
        }
        cout << "|\n";
    }
    for(int i=0; i<1; i++) {
        for(int j=0; j<6; j++) {
            aux=M[2][j];
            M[2][j]=M[i][j];
            M[i][j]=aux;
        }
    }
    for(int i=0; i<3; i++) {
        cout << "| ";
        for(int j=0; j<6; j++) {
            cout << M[i][j] << " ";
        }
        cout << "|\n";
    }
    return 0;
}