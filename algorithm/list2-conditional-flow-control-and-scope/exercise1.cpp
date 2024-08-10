#include <iostream>
using namespace std;

int main() {
    int X, Y, Z;
    cout << "\ninforme três números inteiros: ";
    cin >> X >> Y >> Z;

    if( (X<Y+Z) && (Y<X+Z) && (Z<X+Y) ) {
        cout << "\né possível criar um triângulo com os números informados. Trata-se de um ";

        if( (X==Y) && (Y==Z) ) {
            cout << "triângulo equilátero.";
        } else {
            if ( (X==Y) || (X==Z) || (Y==Z) ) {
                cout << "triângulo isóceles.";
            } else {
                cout << "triângulo escaleno.";
            }
        }
    } else
        cout << "\nimpossível criar um triângulo com os números informados.";
        
    cout << endl << endl;

    return 0;
}