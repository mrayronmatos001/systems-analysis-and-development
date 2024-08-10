#include <iostream>
using namespace std;

int main() {
    int qttInstallment;
    float amount, installment;
    cout << "informe o valor total da compra, o valor da parcela e a quantidade de parcelas: ";
    cin >> amount >> installment >> qttInstallment;

    cout << endl;

    if(amount == (float)qttInstallment*installment) {
        cout << "o parcelamento foi sem juros";
    } else {
        cout << "o parcelamento foi com juros";
    }

    cout << endl << endl;

    return 0;
}