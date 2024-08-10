#include <iostream>
using namespace std;

int main() {
    system("clear");
    int S[100], R[100], ask, i;
    float adjustment;
    ask = i = 0;
    do {
        cout << "informe o salário do funcionário ";
        cin >> S[i];
        i++;
        cout << "deseja para a alimentação? (digite -1) ";
        cin >> ask;
        cout << "\n";
    }while(ask!=-1);
    cout << "informe o  porcentagem do reajuste em decimal ";
    cin >> adjustment;
    cout << "\n" << i << "\n";
    cout << "\no vetor reajustado foi de ";
    for(int j=0; j<i; j++) {
        R[j]=S[j]*(1+adjustment);
        cout << R[j] << " ";
    }
    cout << "\n";
    return 0;
}