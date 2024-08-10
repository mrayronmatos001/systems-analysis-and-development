#include <iostream>
using namespace std;

int main() {
    int drivers, cnhId , majorCnhId, trafficTickets, majorTrafficTickets=0;
    float ticketAmount=0, ticketValue, amount;
    cout << "\ninforme a quantidade de motoristas: ";
    cin >> drivers;

    for(int i=0; i<drivers; i++) {
        cout << "\ninforme o número da cnh do motorista atual: ";
        cin >> cnhId;
        cout << "\ninforme a quantidade de multas: ";
        cin >> trafficTickets;

        ticketAmount = 0;

        for(int i=0; i<trafficTickets; i++) {
            cout << "informe o valor da multa " << i+1 << "- ";
            cin >> ticketValue;

            ticketAmount += ticketValue;
        }

        if(trafficTickets>majorTrafficTickets) {
            majorTrafficTickets = trafficTickets;
            majorCnhId = cnhId;
        }

        amount += ticketAmount;

        cout << "\na dívida do motorista com nº" << cnhId << " é R$" << ticketAmount << endl;
    }

    cout << "\no valor total arrecadado foi de R$" << amount << " e a maior dívida foi do motorista com nº" << majorCnhId << " e o valor da sua dívida foi de R$" << majorTrafficTickets << endl << endl;

    return 0;
}