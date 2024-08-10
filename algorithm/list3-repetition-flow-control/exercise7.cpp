#include <iostream>
using namespace std;

int main() {
    system("clear");

    int num, startNum;
    float total;
    char arithmeticOperator;

    cout << "\ninforme um número: ";
    cin >> startNum;

    total = startNum;
    do {
        cout << "\ninforme uma operação: ";
        cin >> arithmeticOperator;

        if(arithmeticOperator!='=') {
            cout << "\ninforme um número: ";
            cin >> num;

            switch (arithmeticOperator) {
            case '+':
                total+=num;
                break;
            case '-':
                total-=num;
                break;
            case '*':
                total*=num;
                break;
            case '/':
                total/=(float)num;
                break;
            } 
        }

    }while(arithmeticOperator!='=');

    system("clear");

    cout << "\n\nresultado: " << total << endl << endl;

    return 0;
}