//Escreva o valor em reais (R$) de um valor lido em dólares (US$). O algoritmo deverá solicitar o
//valor da cotação do dólar e também a quantidade de dólares que o usuário deseja converter.

#include <iostream>
using namespace std;

int main() {
    //entry
    float usd, brl, dollarQuotation;
    cout << "informe a quandidade de dólares que você deseja converter: ";
    cin >> usd;
    cout << "informe a cotação do dólar para real neste instate: ";
    cin >> dollarQuotation;

    //process
    brl = usd * dollarQuotation;

    //exit
    cout << "a quantidade de reais convertida será de R$" << brl;

    return 0;
}