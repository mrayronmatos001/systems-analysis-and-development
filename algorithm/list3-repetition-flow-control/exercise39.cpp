#include <iostream>
using namespace std;

int main() {
    system("clear");
    int num1, num2, evenSum=0, oddSum=0;
    cout << "informe dois números: ";
    cin >> num1 >> num2;
    for(int i=num1+1; i<num2; i++) {
        if(i%2==0) evenSum+=i;
        if(i%2!=0) {
            int j=3;
            while(i%j!=0) {
                j++;
            }
            oddSum+=j;
        }
    }
    cout << "\n o resultado da soma dos números pares no intervado é de " << evenSum << " e do divisores dos números ímpares é " << oddSum << "\n\n";
    return 0;
}