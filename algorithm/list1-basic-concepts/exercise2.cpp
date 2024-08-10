// Calcule e escreva a quantidade de dinheiro gasta por um fumante a partir da leitura das
//informações número de anos que ele fuma, quantidade de cigarros fumados por dia e preço de
//uma carteira.

#include <iostream> 
using namespace std;

int main() {
    //entry
    const int YEAR_IN_DAYS = 365;
    int years, cigarettesPerDay;
    float quantityOfCigarettesPerPack, priceOfCigarettePack, amount;
    cout << "informe há quantos anos você fuma: ";
    cin >> years;
    cout << "informe quantos cigarros você fuma por dia: ";
    cin >> cigarettesPerDay;
    cout << "informe a quantidade de cigarros em cada carteira: ";
    cin >> quantityOfCigarettesPerPack;
    cout << "informe o preço médio da carteira de cigarro durantes esses anos: ";
    cin >> priceOfCigarettePack;

    //process
    amount = years * YEAR_IN_DAYS * (cigarettesPerDay / quantityOfCigarettesPerPack) * priceOfCigarettePack;

    //exit
    cout << "o prezuíjo ocasionado pelo vício no cigarro em todos esses anos foi de R$" << amount;

    return 0;
}