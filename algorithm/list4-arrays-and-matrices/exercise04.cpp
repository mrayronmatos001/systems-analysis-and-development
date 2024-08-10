#include <iostream>
using namespace std;

int main() {
    system("clear");
    int A[20], majorDiff=0, a, b;
    for(int i=0; i<20; i++) {
        cout << "informe um número inteiro: ";
        cin >> A[i];
    }
    for(int i=0; i<19; i++) {
        if(A[i]-A[i+1]<0) {
            if((A[i+1]-A[i])>majorDiff) {
                majorDiff=A[i+1]-A[i];
                a=i;
                b=i+1;
            }
        } else {
            if((A[i]-A[i+1])>majorDiff) {
                majorDiff=A[i]-A[i+1];
                a=i;
                b=i+1;
            }
        }
    }
    cout << "\no a maior diferença foi de " << majorDiff << " resultado das casas " << a << " e " << b << "\n";
    return 0;
}