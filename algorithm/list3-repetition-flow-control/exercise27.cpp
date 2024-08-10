#include <iostream>
using namespace std;

int main() {
    system("clear");
    int num, storeNum, inverseNum=0;
    cout << "informe um número inteiro: ";
    cin >> num;
    storeNum = num;

    while(num>=1) {
        inverseNum *= 10;
        inverseNum += num%10;
        num = num/10;
    }

    inverseNum == storeNum ? cout << "\ncapicua\n\n" : cout << "\nfalso capicua\n\n";
    return 0;
}