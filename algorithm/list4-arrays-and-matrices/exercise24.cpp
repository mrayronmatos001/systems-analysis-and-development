#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    system("clear");
    srand(time(0));
    int A[15][5], B[75], C[75], bCounter, cCounter, reapeter;
    bCounter=cCounter=reapeter=0;
    for(int i=0; i<15; i++) {
        for(int j=0; j<5; j++) {
            A[i][j]=rand()%100;
        }
    }
    for(int i=0; i<15; i++) {
        for(int j=0; j<5; j++) {
        B[bCounter]=A[i][j];
        cCounter=0;
            for(int l=0; l<15; l++) {
                for(int t=0; t<5; t++) {
                    if(A[i][j]==A[l][t]) cCounter++;
                }
            }
            C[bCounter]=cCounter;
            bCounter++;
        }
    }
    for(int i=0; i<75; i++) {
        reapeter=0;
        for(int j=0; j<75; j++) {
            if(B[i]==B[j]&&B[i]!=-1) {
                reapeter++;
                if(reapeter>1) {
                    B[j]=-1;
                }
            }
        }
    }
    cout << "\nval|rep";
    for(int i=0; i<75; i++) {
        if(B[i]!=-1) {
            cout << "\n" << B[i];
            B[i]>9?cout << " |":cout<<"  |";
            cout << " " << C[i];
        }
    }
    cout << "\n\n";
    return 0;
}