#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float a, b, c, delta;
    cout << "informe o valor de a, b e c para calcular a equação de 2º grau: ";
    cin >> a >> b >> c;

    cout << endl;

    if(a==0) {
        cout << "não é uma equação de segundo grau, escolha um valor diferente de 0 para a" << endl << endl;
        return 1;
    }

    delta = b*b - 4*a*c;

    if(delta>0) {
        cout << "o valor de x1 é " << (float)(-b + sqrt(delta))/2*a << " e o valor de x2 é " << (float)(-b - sqrt(delta))/2*a;
    } else if (delta == 0) {
        cout << "o valor de x é " << (float)-b/2*a << ". Raiz única";
    } else {
        cout << "não existe raiz";
    }

    cout << endl << endl;

    return 0;
}