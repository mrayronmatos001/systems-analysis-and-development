#include <iostream>
using namespace std;

int main() {
    int num, sum=1;
    cout << endl << endl;
    cout << "informe um número natural: ";
    cin >> num;

    for(int i = num-1; i > 1; i--) {
        if(num%i==0) sum += i;    
    }

    cout << endl;
    sum == num ? cout << "número perfeito" : cout << "número imperfeito";
    cout << endl << endl;

    return 0;
}