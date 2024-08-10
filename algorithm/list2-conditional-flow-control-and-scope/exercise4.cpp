#include <iostream>
using namespace std;

int main() {
    const int ONE_PERCENT = 0.01, ONE_POINT_FIVE_PERCENT = 0.015;
    int year;
    float price;
    cout << "informe o ano e o preço do veículo (x.x) para calcular o imposto a ser pago: ";
    cin >> year >> price;

    cout << "\no imposto a ser pago é de ";

    if(year<1990) {
        cout << price * ONE_PERCENT;
    } else {
        cout << price * ONE_POINT_FIVE_PERCENT;
    }

    cout << endl << endl;

    return 0;
}