#include <iostream>
using namespace std;

void multiplicationTable(int num);
int readNumber(int n1, int n2);

int main() {
    system("clear");
    int n1, n2, num;
    
    cout << "informe dois números representando um intervalo onde o primeiro é maior ou igual a 1 e o segundo é menor ou igual a 10: ";
    do {
        cin >> n1 >> n2;
    }while((n1<1||n1>10)||(n2<1||n2>10));
    num=readNumber(n1, n2);
    multiplicationTable(num);
    return 0;
}

int readNumber(int n1, int n2) {
    int num, major, i;
    bool isValid;
    n1>n2?i=n2:i=n1;
    i==n1?major=n2:major=n1;
    do {
        isValid=true;
        cout << "\ninforme um número para a tabuada: ";
        cin >> num;
        if(num<i||num>major) { 
            isValid=false;
            cout << "\nNúmero inválido! Digite novamente.\n";
        }
    }while(!isValid);
    return num;
}

void multiplicationTable(int num) {
    for(int i=0; i<10; i++) {
        cout << "\n" << num << " x " << i+1 << " = " << num*(i+1);
    }
    cout << "\n\n";
}