#include <iostream>
using namespace std;

int main() {
    const int TEN_INCREASED_PERCENTAGE = 1.1, TWENTY_INCREASED_PERCENTAGE = 1.2, THIRTY_INCREASED_PERCENTAGE = 1.3, FOURTY_INCREASED_PERCENTAGE = 1.4;
    int code;
    float salary;
    cout << "informe o salário (x.x) e o código do cargo do funcionário para calcular o seu novo salário: ";
    cin >> salary >> code;

    cout << "\n o novo salário será de R$";

    switch(code) {
        case 101: 
            cout << salary * TEN_INCREASED_PERCENTAGE;
            break;
        case 102:
            cout << salary * TWENTY_INCREASED_PERCENTAGE;
            break;
        case 103:
            cout << salary * THIRTY_INCREASED_PERCENTAGE;
            break;
        default:
            cout << salary * FOURTY_INCREASED_PERCENTAGE;
            break;
    }

    cout << endl << endl;

    return 0;
}