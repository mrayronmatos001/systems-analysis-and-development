#include <iostream>
using namespace std;

int main() {
    int day, days, month;
    
    do {
        cout << "informe o dia da semana que inicia o mês (1-dom, 7-sab): ";
        cin >> day;
        cout << "informe o mês (1-jan, 12-dez): ";
        cin >> month;
    }while((day<1||day>7) || (month<1||month>12));

    cout << "\nDom Seg Ter Qua Qui Sex Sab\n";

    switch(month) {
        case 2: 
            days = 28;
            break;
        case 4:
        case 6:
        case 9:
        case 11: 
            days=30;
            break;
        default:
            days=31;
    }

    for(int i=1; i<=7; i++) {
        if(i>=day) {
            if(i<10) {
                cout << "  " << i;
            } else {
                cout << " " << i;
            }
        } else {
            cout << "   ";
        }
        cout << " ";
    }

    cout << "\n";
    
    for(int i=8; i<=days; i++) {
        if(i<10) {
                cout << "  " << i;
            } else {
                cout << " " << i;
            }
        cout << " ";
        if(i%7==0) cout << "\n";
    }

    cout << "\n\n";
    
    return 0;
}