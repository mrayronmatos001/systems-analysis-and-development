#include <iostream>
using namespace std;

int main() {
    int quantity, cod, amount=0;
    float value;
    char asker;
    do {

        cout << "\n   Menu dos produtos disponíveis   ";
        cout << "\n 1 - bandeja com 30 ovos";
        cout << "\n 10 - filé de peito de frango";
        cout << "\n---------------------------------------";
        cout << "\n\ninforme o código do produto, o valor e a quantidade: ";
        cin >> cod >> value >> quantity;

        switch(cod) {
            case 1:
            case 10:
                amount += value*quantity;
                break;
            default:
                cout << "\ncódigo inválido";
        }

        do {
            cout << "\ninforme se deseja passar mais algum produto (S-sim, N-não): ";
            cin >> asker;
        }while((asker!='S')&&(asker!='N'));

    }while(asker=='S');

    cout << "o valor total gasto foi de " << amount << "\n\n";

    return 0;
}