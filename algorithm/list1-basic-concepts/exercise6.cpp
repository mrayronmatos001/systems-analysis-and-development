//O custo ao consumidor de um carro novo é a soma do custo de fábrica com a percentagem do
//distribuidor e dos impostos, ambos aplicados ao custo de fábrica. Supondo que a percentagem
//do distribuidor seja de 28% e os impostos de 45%, escreva um algoritmo que leia o custo de
//fábrica de um carro e escreva o custo ao consumidor.

#include <iostream>
using namespace std;

int main() {
    //entry
    const float DISTRIBUTOR_PERCENTAGE = 0.28, TAX_PERCENTAGE = 0.45;
    float manufacturingCost, consumerCost;
    cout << "informe o custo de fabricação do veículo: ";
    cin >> manufacturingCost;

    //process
    consumerCost = manufacturingCost + manufacturingCost * DISTRIBUTOR_PERCENTAGE + manufacturingCost * TAX_PERCENTAGE;

    //exit
    cout << "o custo do consumidor será de R$" << consumerCost;
    
    return 0;
}