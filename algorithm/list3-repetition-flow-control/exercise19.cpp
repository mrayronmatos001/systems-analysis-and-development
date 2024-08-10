#include <iostream>
using namespace std;

int main() {
    int c, d, u;
    for(int i=100; i<=999; i++) {
        c = i/100;
        d = i%100/10;
        u = i%100%10;
        cout << "\n" << i << " " << c * d * u << " (" << c << " * " << d << " * " << u << " )";

        if(i>100&&i%20==0) {
            cout << "\npressione Enter para continuar";
            cin.get();
            system("clear");
        }
    }
    return 0;
}