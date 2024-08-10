#include <iostream>
using namespace std;

int main() {
    int grossPay, netPay, id, dependents;
    for(int i=0; i<10; i++) {
        cout << "\ninforme o número de identificação do funcionário " << i+1 << "- ";
        cin >> id;

        cout << "\ninforme a quantidade de filhos dependentes: ";
        cin >> dependents;
        if(dependents > 3) {
            cout << "\no usuário de identificação " << id << " possui mais de 3 dependentes";
        }

        grossPay = 12*40*4 + 40*dependents;
        netPay = grossPay - grossPay*0.135;

        cout << "\n\no salário bruto é de R$" << grossPay;
        cout << "\no salário líquido é de R$" << netPay << "\n\n";

        return 0;
    }
}