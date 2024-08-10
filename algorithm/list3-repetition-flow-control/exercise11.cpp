#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "informe um valor a: ";
    cin >> a;
    cout << "informe um valor b: ";
    cin >> b;

    while(b<a) {
        a-=b;
    }
    
    cout << a << endl;

    return 0;
}