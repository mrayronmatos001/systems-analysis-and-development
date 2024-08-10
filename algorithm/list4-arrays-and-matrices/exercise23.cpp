#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    system("clear");
    srand(time(0));
    int M[5][5], lineFourSum, columnTwoSum, diagonalLineSum, secondDiagonalLineSum, sum, line=-1, column=5;
    lineFourSum =columnTwoSum=diagonalLineSum=secondDiagonalLineSum=sum=0;
    for(int i=0; i<5; i++) {
        for(int j=0; j<5; j++) {
            M[i][j]=rand()%10;
        }
    }
    for(int i=0; i<5; i++) {
        lineFourSum+=M[3][i];
        columnTwoSum+=M[i][1];
    }
    for(int i=0; i<5; i++) {
        line++;
        column--;
        for(int j=0; j<5; j++) {
            if(i==j) diagonalLineSum+=M[i][j];
            if((i==line)&&(column==j)) secondDiagonalLineSum+=M[line][column];
            sum+=M[i][j];
        }
    }

    cout << "a matriz M:\n";
    for(int i=0; i<5; i++) {
        cout << "| ";
        for(int j=0; j<5; j++) {
            cout << M[i][j] << " ";
        }
        cout << "|\n";
    }
    cout << "\nsoma da linhas 4: " << lineFourSum;
    cout << "\nsoma da coluna 2: " << columnTwoSum;
    cout << "\nsoma da diagonal principal: " << diagonalLineSum;
    cout << "\nsoma da diagonal secundária: " << secondDiagonalLineSum;
    cout << "\nsoma da matriz total: " << sum << "\n\n";

    return 0;
}