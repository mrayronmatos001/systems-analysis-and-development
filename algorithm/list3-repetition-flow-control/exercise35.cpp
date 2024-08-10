#include <iostream>
using namespace std;

int main() {
    system("clear");
    int num, counter;
    cout << "informe um número inteiro: ";
    cin >> num;
    counter=num;
    while(counter<=num*2) {
        for(int i=1; i<=10; i++) {
            cout << counter << "*" << i << "=" << counter*i << "\n";
        }
        cout << "\n";
        counter++;
    }
    return 0;
}