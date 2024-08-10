//Leia dois valores inteiros nas variáveis Val1 e Val2, troque os seus conteúdos e escreva o
//resultado. Exemplo: Se o valor lido foi 10 para a variável Val1 e 11 para a variável Val2, depois
//da troca o algoritmo terá que escreva Val1 = 11 e Val2 = 10.

#include <iostream>
using namespace std;

int main() {
    //entry
    int int1, int2, aux;
    cout << "informe um valor inteiro qualquer: ";
    cin >> int1;
    cout << "informe um segundo valor inteiro qualquer: ";
    cin >> int2;

    //process
    aux = int1;
    int1 = int2;
    int2 = aux;
    //exit
    cout << "Val1 = " << int1 << "Val2 = " << int2;

    return 0;
}