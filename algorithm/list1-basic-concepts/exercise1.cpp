//1. Leia a idade de uma pessoa expressa em anos, meses e dias e mostre-a expressa apenas em dias.

#include <iostream>
using namespace std;

int main() {
    //entry
    const int YEAR_IN_DAYS = 360, MONTH_IN_DAYS = 30;
    int days, months, years, age;
    cout << "informe quantos anos você tem: ";
    cin >> years;
    cout << "informe quantos meses você tem considerando do mês do seu aniversário até o mês anterior ao atual: ";
    cin >> months;
    cout << "informe quantos dias você tem considerando os dias decorridos no mês atual somado aos dias que faltam para completar o mês do seu aniversário: ";
    cin >> days;

    //process
    age = days + months * YEAR_IN_DAYS + years * MONTH_IN_DAYS;

    //exit
    cout << "a sua idade expressa em dias é de: " << age;

    return 0;
}