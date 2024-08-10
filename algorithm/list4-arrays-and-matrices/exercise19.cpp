#include <iostream>
using namespace std;

int main() {
    system("clear");
    int T[13], R[13], punter, counter;
    punter=counter=0;
    for(int i=0; i<13; i++) {
        cout << "informe o número do sorteio para preenchimento do gabarito: ";
        cin >> T[i];
    }
    do {
        cout << "\ninforme o número do apostador: ";
        cin >> punter;
        cout << "\n";
        if(punter!=-1) {
            for(int i=0; i<13; i++) {
                cout << "informe o número a ser apostado: ";
                cin >> R[i];
            }
            for(int i=0; i<13; i++) {
                for(int j=0; j<13; j++) {
                    if(R[j]==T[i]) counter++;
                }
            }
            cout << "\no apostador nº " << punter << "acertou " << ((float)counter/13)*100 << "%";
        }
    }while(punter!=-1);
    return 0;
}