#include <iostream>
using namespace std;

int main() {
    int a, b, c, major, middle, lower;
    char order;
    cout << "infome 3 números inteiros quaisquer e ordenação desejada (c/d): ";
    cin >> a >> b >> c >> order;

    if(a>b && a>c) {
        major = a;
    } else if(b>c) {
        major = b;
    } else {
        major = c;
    }

    if( (a>b && a<c) || (a>c && a<b) ) {
        middle = a;
    } else if( b>a || b>c ) {
        middle = b;
    } else {
        middle = c;
    }

    if(a<b && a<c) {
        lower = a;
    } else if (b<c) {
        lower = b;
    } else {
        lower = c;
    }

    cout << endl;

    if(order=='c') {
        cout << lower << " " << middle << " " << major;
    } else {
        cout << major << " " << middle << " " << lower;
    }

    cout << endl << endl;

    return 0;
}