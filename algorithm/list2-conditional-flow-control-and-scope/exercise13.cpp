#include <iostream>
using namespace std;

int main() {
    int gasoline;
    float distance, gasMileage;
    cout << "informe a distância (km) e o gasto com gasolina (L): ";
    cin >> distance >> gasoline;

    cout << endl;

    gasMileage = (float)distance / gasoline;

    if(gasMileage<8) {
        cout << "venda o carro";
    } else if(gasMileage>=8 && gasMileage<=12) {
        cout << "econômico";
    } else {
        cout << "super econômico";
    }

    cout << endl << endl;

    return 0;
}