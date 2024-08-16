#include <iostream>
using namespace std;

int spl(int n1, int n2);
int mul(int n1, int n2);
int sub(int n1, int n2);
int sum(int n1, int n2);

int main() {
    system("clear");
    int n1, n2;
    char op;
    cout << "informe os 2 números e a operação: ";
    cin >> n1 >> n2 >> op;
    if(op=='+')
        cout << sum(n1, n2) << "\n";
    else if(op=='-')
        cout << sub(n1, n2) << "\n";
    else if(op=='*')
        cout << mul(n1, n2) << "\n";
    else if(op=='/')
        cout << spl(n1, n2) << "\n";
    return 0;
}

int sum(int n1, int n2) {
    return n1+n2;
}

int sub(int n1, int n2) {
    return n1-n2;
}

int mul(int n1, int n2) {
    return n1*n2;
}

int spl(int n1, int n2) {
    return (float)n1/n2;
}