#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    system("clear");
    srand(time(0));
    int A[10], B[10], C[20], aux;
    bool swapper;
    for(int i=0; i<10; i++) {
        A[i]=rand()%100;
        B[i]=rand()%100;
        C[i]=A[i];
        C[10+i]=B[i];
    }
    do {
        swapper=false;
        for(int i=0; i<19; i++) {
            if(C[i+1]<C[i]) {
                aux=C[i];
                C[i]=C[i+1];
                C[i+1]=aux;
                swapper=true;
            }
        }
    }while(swapper);
    cout << "o vetor organizado ficou: ";
    for(int i=0; i<20; i++) {
        cout << C[i] << " ";
    }
    cout << "\n\n";
    
    return 0;
}