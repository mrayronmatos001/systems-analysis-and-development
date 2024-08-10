#include <iostream>
using namespace std;

int main() {
    system("clear");
    int num, mod, res;

    do {
        cout << "\ninforme um número: ";
        cin >> num;
    }while(num<1000 || num>9999);

    mod = num;
    while(mod > 100) {
        mod -= 100;
    }

    res = (num/100 + mod) * (num/100 + mod);

    res==num? cout << "positivo" : cout << "negativo";
    cout << "\n\n";

    return 0;
}