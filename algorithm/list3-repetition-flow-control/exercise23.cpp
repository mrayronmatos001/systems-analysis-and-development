#include <iostream>
using namespace std;

int main() {
    system("clear");
    int n, finder=0, i=11, a=2;

    cout << "\ninforme o n-ésimo número primo maior do que onze desejado: ";
    cin >> n;

    do {
        char isPrime=true;
        a=2;
        i++;
        while(a*a <= i) {
            if(i%a==0) {
                isPrime=false;
            }
            a++;
        }
        if(isPrime) {
            finder++;
        }
    }while(finder<n);

    cout << "\no número primo desejado é: " << i << "\n\n";
    return 0;
}