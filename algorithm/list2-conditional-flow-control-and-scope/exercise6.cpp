#include <iostream>
using namespace std;

int main() {
    const int TAX_LEVEL_ONE = 12, TAX_LEVEL_TWO = 17, TAX_LEVEL_THREE = 25;
    int workTimes, teachLevel;
    cout << "informe as horas trabalhadas e o nível do cargo do professor (1, 2, 3...): ";
    cin >> workTimes >> teachLevel;

    cout << "\no salário pago ao professor será de R$";

    switch(teachLevel) {
        case 1:
            cout << workTimes * TAX_LEVEL_ONE;
            break;
        case 2:
            cout << workTimes * TAX_LEVEL_TWO;
            break;
        case 3:
            cout << workTimes * TAX_LEVEL_THREE;
            break;
        default:
            break;
    }

    cout << endl << endl;

    return 0;
}