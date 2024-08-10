//Leia o valor de uma compra nas Lojas Sua Melhor Compra e mostre o valor das prestações de
//acordo com a quantidade de parcelas desejada pelo usuário. A loja está vendendo seus produtos
//a vista ou parcelado em até 10 vezes sem juros.

#include <iostream>
using namespace std;

int main() {
    //entry
    int installment;
    float purchase, installmentAmount;
    cout << "informe o valor da compra: ";
    cin >> purchase;
    cout << "informe a quantidade de parcelas de 1x a 10x: ";
    cin >> installment;

    //process
    installmentAmount = purchase / installment;

    //exit
    cout << "o valor de cada prestação para " << installment << " parcelas será de R$" << installmentAmount;

    return 0;
}