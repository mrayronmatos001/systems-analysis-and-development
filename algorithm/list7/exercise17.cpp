#include <iostream>
using namespace std;

int main() {
    system("clear");
    int v[10];
    for(int i=0; i<10; i++) {
        cout << "informe um número inteiro: ";
        cin >> v[i];
    }
    for(int i=0; i<10; i++) {
        cout << *(v+(9-i)) << "\n";
    }
    return 0;
}