#include <iostream>
using namespace std;

int main() {
    const int SODA_PRICE = 1, JUICE_PRICE = 2;
    const float HOTDOG_PRICE = 1.1, BAURU_PRICE = 1.3, BAURU_WITH_EGGS_PRICE = 1.5, HAMBURGUER_PRICE = 1.1, CHEESBURGUER_PRICE = 1.3, NESCAU_PRICE = 1.5;
    int sandwichCode, drinkCode, sandwichQtd, drinkQtd;
    float amount = 0;
    cout << "informe o código do sanduíche e a quantidade, e o código da bebida e a quantidade: ";
    cin >> sandwichCode >> sandwichQtd >> drinkCode >> drinkQtd;

    switch(sandwichCode) {
        case 100:
            amount += sandwichQtd * HOTDOG_PRICE;
            break;
        case 101:
            amount += sandwichQtd * BAURU_PRICE;
            break;
        case 102:
            amount += sandwichQtd * BAURU_WITH_EGGS_PRICE;
            break;
        case 103:
            amount += sandwichQtd * HAMBURGUER_PRICE;
            break;
        case 104:
            amount += sandwichQtd * CHEESBURGUER_PRICE;
            break;
        default:
            break;
    }

    switch(drinkCode) {
        case 105:
            amount += drinkQtd * SODA_PRICE;
            break;
        case 106:
            amount += drinkQtd * JUICE_PRICE;
            break;
        case 107:
            amount += drinkQtd * NESCAU_PRICE;
            break;
        default:
            break;
    }

    cout << "\no valor gasto total foi de R$" << amount << endl << endl;

    return 0;
}