//Leia um número inteiro N e um percentual qualquer e escreva qual o valor do percentual
//aplicado ao número.

#include <iostream>
using namespace std;

int main() {
    //entry
    int N;
    float percentage, result;
    cout << "informe um número inteiro qualquer: ";
    cin >> N;
    cout << "informe um valor percentual em decimal: ";
    cin >> percentage;

    //process
    result = N * percentage;

    //exit
    cout << "o valor resultante do cálculo será de " << result;

    return 0;
}