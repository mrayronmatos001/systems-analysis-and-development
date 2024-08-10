#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "informe a sua idade em anos: ";
    cin >> age;

    cout << endl;

    if(age >= 18) {
        cout << "você já tem idade para tirar sua CNH.";
    } else {
        cout << "você ainda não tem idade para dirigir, tente daqui a " << 18 - age << " anos.";
    }

    cout << endl << endl;

    return 0;
}