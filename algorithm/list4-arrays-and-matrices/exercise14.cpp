#include <iostream>
using namespace std;

int main() {
    system("clear");
    int A[20], B[20];
    bool isEqual=true;
    for(int i=0; i<20; i++) {
        cout << "informe um número ";
        cin >> A[i];
        B[19-i]=A[i];
    }
    for(int i=0; i<20; i++) {
        if(A[i]!=B[i]) isEqual=false;
    }
    isEqual ? cout << "\né um palíndromo" : cout << "\nnão é um palíndromo";
    cout << "\n\n";
    return 0;
}