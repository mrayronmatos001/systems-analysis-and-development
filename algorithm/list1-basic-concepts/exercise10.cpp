//Leia dois valores inteiros para as variáveis A e B e efetue as operações de adição, subtração,
//multiplicação e divisão de A por B, apresentando ao final os resultados obtidos. Em seguida leia
//dois valores lógicos C e D e efetue as operações de negação (de cada um dos valores), conjunção
//(E) e disjunção (OU), apresentando ao final os resultados obtidos.

#include <iostream>
using namespace std;

int main() {
    //entry
    int A, B;
    cout << "informe um número inteiro qualquer: ";
    cin >> A;
    cout << "informe um segundo número inteiro qualquer: ";
    cin >> B;

    //exit & process
    cout << "\nA adição de A e B é " << (A+B) << "\nA subtração de A e B é " << (A-B) << "\nA multiplicação de A e B é " << (A*B) << "\nA divisão de A e B é " << (A/B) << endl;

    //entry
    bool C, D;
    cout << "informe 0 ou 1: ";
    cin >> C;
    cout << "informe 0 ou 1: ";
    cin >> D;

    //exit & process
    cout << "\nA negação de C é " << !C << "\nA negação de D é " << !D << "\nA conjunção entre C e D é " << (C&&D) << "\nA disjunção de C e D é " << (C||D);

    return 0;
}