#include <iostream>
using namespace std;

void parameterChanger(int n1, int n2);

int main() {
    system("clear");
    parameterChanger(1, 2);
    return 0;
}

void parameterChanger(int n1, int n2) {
    int aux;
    aux=n1;
    n1=n2;
    n2=aux;
    cout << "n1: " << n1 << " n2: " << n2 << "\n";
}