#include <iostream>
using namespace std;

int isEven(int num);

int main() {
    system("clear");
    int num;

    cout << "digite um número: ";
    cin >> num;

    if(isEven(num))
        cout << " é par!";
    else 
        cout << " é ímpar!";
    cout << "\n\n";
    
    return 0;
}

int isEven(int num) {
    int isEven=false;
    if(num%2==0) 
        isEven=true;
    return isEven;
}