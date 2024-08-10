#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "informe um número inteiro qualquer: ";
    cin >> num;
    int rest10000 = num%10000, rest1000 = rest10000%1000, rest100 = rest1000%100, rest10 = rest100%10;

    cout << endl;

    if(num>0 && num<10) {
        cout << num;
    } else if (num>0 && num<100) {
        cout << num/10 + num%10;
    } else if (num>0 && num<1000) {
        cout << num/100 + rest100/10 + rest10;
    } else if (num>0 && num<10000) {
        cout << num/1000 + rest1000/100 + rest100/10 + rest10;
    } else if (num>0 && num<100000) {
        cout << num/10000 + rest10000/1000 + rest1000/100 + rest100/10 + rest10;
    }

    cout << endl << endl;

    return 0;
}