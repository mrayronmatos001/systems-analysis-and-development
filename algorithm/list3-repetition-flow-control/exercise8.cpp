#include <iostream>
using namespace std;

int main() {
    int container;
    int long long grain=1;

    cout << "\ninforme a casa desejada: ";
    cin >> container;

    for(int i=1; i<container; i++) {
        grain*=2;
    }

    if (grain==1) {
        cout << "\nserá pago " << grain << " grão";
    } else {
        cout << "\nserá pago " << grain << " grãos";
    }

    cout << endl << endl;

    return 0;
}