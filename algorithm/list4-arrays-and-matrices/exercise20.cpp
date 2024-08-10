#include <iostream>
using namespace std;

int main() {
    system("clear");
    int l1, c1, l2, c2, anwser, veryf=0;
    cout << "qual a linha e a coluna do primeiro vetor? ";
    cin >> l1 >> c1;
    do {  
        if(veryf!=0) {cout << "coluna do vetor 1 precisa ser igual a linha do vetor 2\n";}
        cout << "\nqual a linha e a coluna do segundo vetor? ";
        cin >> l2 >> c2;
        veryf++;
    }while(c1!=l2);
    int M[l1][c1], N[l2][c2], R[l2][c1], SUM[l1][c1], SUB[l1][c1];

    cout << "\nvetor M: \n";
    for(int i=0; i<l1; i++) {
        for(int j=0; j<c1; j++) {
            cout << "informe um número inteiro: ";
            cin >> M[i][j];
        }
    }
    cout << "\nvetor N: \n";
    for(int i=0; i<l2; i++) {
        for(int j=0; j<c2; j++) {
            cout << "informe um número inteiro: ";
            cin >> N[i][j];
        }
    }

    for(int i=0; i<l1; i++) {
        for(int j=0; j<c2; j++) {
            anwser=0;
            for(int x=0; x<c1; x++) {
                anwser+=M[i][x]*N[x][j];
            }
            R[i][j]=anwser;
        }
    }

    cout << "\na matriz multiplicação é: \n";
    for(int i=0; i<l1; i++) {
        cout << "| ";
        for(int j=0; j<c2; j++) {
            cout << R[i][j] << " ";
        }
        cout << "|\n";
    }

    if(l1!=l2||c1!=c2) {
        cout << "\nnão é possível fazer adição ou subtração de matriz";
    } else {
        for(int i=0; i<l1; i++) {
            for(int j=0; j<c1; j++) {
                SUM[i][j]=M[i][j]+N[i][j];
                SUB[i][j]=M[i][j]-N[i][j];
            }
        }

        cout << "\na matriz soma é: \n";
        for(int i=0; i<l1; i++) {
            cout <<"| ";
            for(int j=0; j<c1; j++) {
                cout << SUM[i][j] << " ";
            }
            cout << "|\n";
        }

        cout << "\na matriz subtração é: \n";
        for(int i=0; i<l1; i++) {
            cout <<"| ";
            for(int j=0; j<c1; j++) {
                cout << SUB[i][j] << " ";
            }
            cout << "|\n";
        }

    }
    
    return 0;
}