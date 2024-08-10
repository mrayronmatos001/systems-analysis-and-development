#include <iostream>
using namespace std;

int main() {
    system("clear");
    int num;

    cout << "\ninforme um número: ";
    cin >> num;

    for(int i=1; i<=num; i++) {
        if(num%i==0) {
            cout << i << " ";
        }
    }

    cout << "\n\n";

    return 0;
}