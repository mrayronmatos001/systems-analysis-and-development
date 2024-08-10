//Leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit. A
//fórmula de conversão é F=(9*C+160)/5, sendo F a temperatura em Fahrenheit e C a temperatura
//em Celsius.

#include <iostream>
using namespace std;

int main() {
    //entry
    int celsius;
    float fahrenheit;
    cout << "informe uma temperatura em graus celsius: ";
    cin >> celsius;
    //process
    fahrenheit = (9 * celsius + 160) / 5;
    //exit
    cout << "a temperatura em fahrenheit será de " << fahrenheit << "F";

    return 0;
}