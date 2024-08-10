#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    system("clear");
    srand(time(0));
    int M[10][10], aux, line=-1, column=10;
    cout << "Matriz M: \n";
    for(int i=0; i<10; i++) {
        cout << "| ";
        for(int j=0; j<10; j++) {
            M[i][j]=rand()%100;
            M[i][j]<10? cout << M[i][j] << "  ": cout << M[i][j] << " ";
        }
        cout << "|\n";
    }
    for(int i=0; i<10; i++) {
        line++;
        column--;
        for(int j=0; j<10; j++) {
            if(i==j) {
                aux=M[line][column];
                M[line][column]=M[i][j];
                M[i][j]=aux;
            }
            if(i==4) {
                aux=M[i][j];
                M[i][j]=M[j][9];
                M[j][9]=M[i][j];
            }
        }
    }
    cout << "\nMatriz Modificada M: \n";
    for(int i=0; i<10; i++) {
        cout << "| ";
        for(int j=0; j<10; j++) {
            M[i][j]<10? cout << M[i][j] << "  ": cout << M[i][j] << " ";
        }
        cout << "|\n";
    }
    cout << "\n\n";
    return 0;
}