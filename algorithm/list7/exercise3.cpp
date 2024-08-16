#include <iostream>
using namespace std;

int sumInterval(int n1, int n2);

int main() {
    system("clear");
    int n1, n2;
    
    cout << "informe 2 números: ";
    cin >> n1 >> n2;
    cout << "\na soma dos números inteiros no intervalo entre os números informados é: " << sumInterval(n1, n2) << "\n\n";

    return 0;
}

int sumInterval(int n1, int n2) {
    int sum=0, major, i;
    n1>n2?i=n2+1:i=n1+1;
    i==n1+1?major=n2:major=n1;
    for(i; i<major; i++) 
        sum+=i;
    return sum;
}