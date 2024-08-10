#include <iostream>
using namespace std;

int main() {
    int num1, num2, part=1, radix=0, isPrime=true;
    cout << "informe dois números distintos: ";
    cin >> num1 >> num2;

    while(radix<=(num1>=num2?num1:num2)) {
        part++;
        radix = part * part;
        if(num1%part==0||num2%part==0) {
            isPrime=false;
        }
    }

    if(isPrime) {
        cout << "\nsão primos entre si\n\n";
    } else {
        cout << "\nnão são primos entre si\n\n";
    }

    return 0;
}