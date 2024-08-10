#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    system("clear");
    srand(time(0));
    int M[12][13], N[12][13], major=0;
    for(int i=0; i<12; i++) {
        major=0;
        for(int j=0; j<13; j++) {
            N[i][j]=M[i][j]=rand()%100;
            if(major<M[i][j]) major=M[i][j];

        }
        for(int l=0; l<13; l++) {
            N[i][l]*=major;
        }
    }
    cout << "Matriz M: \n";
    for(int i=0; i<12; i++) {
        cout << "| ";
        for(int j=0; j<13; j++) {
            cout << M[i][j] << " ";
        }
        cout << "|\n";
    }
    cout << "\nMatriz N: \n";
    for(int i=0; i<12; i++) {
        cout << "| ";
        for(int j=0; j<13; j++) {
            cout << N[i][j] << " ";
        }
        cout << "|\n";
    }

    return 0;
}