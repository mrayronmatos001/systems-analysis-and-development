#include <iostream>
using namespace std;

int main() {
    system("clear");
    int a, b;

    do {
        cout << "\ninforme um número A e um número B: ";
        cin >> a >> b;

        if(a>=0 && b>=0) {
            cout << a << "*" << b << " = " << a;
            for(int i=2; i<b; i++) {
                cout << " + " << a;
            }
            cout << " + " << a << "\n\n";
        }
    }while(a>=0&&b>=0);

    return 0;
}