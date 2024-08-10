#include <iostream>
using namespace std;

int main() {
    system("clear");
    int num, fatorial=1;

    cout << "informe um número: ";
    cin >> num;

    for(int i=num; i>1; i--) {
        fatorial*=i;
    }
    
    cout << "\no fatorial do número informado é " << fatorial << " e o número divisível mais próximo é " << num*2 << "\n\n";
}