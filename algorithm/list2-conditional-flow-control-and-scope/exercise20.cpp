#include <iostream>
using namespace std;

int main() {
    const int FIXED_PRICE = 100, UNTIL_TEN_AGE_PRICE = 80, UNTIL_THIRTY_AGE_PRICE = 50, UNTIL_SIXTY_AGE_PRICE = 95, MORE_THAT_SIXTY_AGE_PRICE = 130;
    int age;
    cout << "informe a idade: ";
    cin >> age;

    cout << "\no preço a pagar pelo plano de saúde será de ";

    if(age < 10) {
        cout << FIXED_PRICE + UNTIL_TEN_AGE_PRICE;
    } else if(age>=10 && age<20) {
        cout << FIXED_PRICE + UNTIL_THIRTY_AGE_PRICE;
    } else if(age>=20 && age<30) {
        cout << FIXED_PRICE + UNTIL_SIXTY_AGE_PRICE;
    } else {
        cout << FIXED_PRICE + MORE_THAT_SIXTY_AGE_PRICE;
    }

    cout << endl << endl;

    return 0;
}