#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    system("clear");
    srand(time(0));
    int M[10][10], minimax, major=0, a, b;
    for(int i=0; i<10; i++) {
        for(int j=0; j<10; j++) {
            M[i][j]=rand()%100;
            if(major<M[i][j]){
                a=i;
                major=M[i][j];
            }
        }
    }
    minimax=M[1][1];
    for(int i=0; i<10; i++) {
        cout << "| ";
        for(int j=0; j<10; j++) {
            if((i==a)&&(minimax>M[i][j])){
                minimax=M[i][j];
                b=j;
            }
            M[i][j]<10? cout << M[i][j] << "  ": cout << M[i][j] << " ";
        }
        cout << "|\n";
    }
    cout << "o minimax é " << minimax << " e a posição é [" << a+1 << "][" << b+1 << "]\n\n";
    return 0;
}