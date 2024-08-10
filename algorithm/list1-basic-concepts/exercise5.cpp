//Leia o tempo de duração de um evento expresso em segundos, converta-o e mostre-o expresso
//em horas, minutos e segundos.

#include <iostream>
using namespace std;

int main() {
    //entry
    const int TIME_DIVISOR = 60;
    int seconds, minutes, hours;
    cout << "informe o tempo total em segundos: ";
    cin >> seconds;

    //process
    minutes = seconds / TIME_DIVISOR;
    seconds %= TIME_DIVISOR;
    hours = minutes / TIME_DIVISOR;
    minutes %= TIME_DIVISOR;

    //exit
    cout << "o resultado em horas, minutos e segundos é de " << hours << "h " << minutes << "' " << seconds << "'' ";

    return 0;
}