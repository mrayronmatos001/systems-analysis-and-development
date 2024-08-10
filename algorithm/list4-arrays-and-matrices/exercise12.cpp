#include <iostream>
using namespace std;

int main() {
    system("clear");
    int V[10], num, a;
    bool isThere=false;
    for(int i=0; i<10; i++) {
        do {
            cout << "informe um número inteiro: ";
            cin >> V[i];
        }while(V[i]<0);
    }
    cout << "\ninforme um número inteiro para verificação ";
    cin >> num;
    for(int i=0; i<10; i++) {
        if(V[i]==num) {
            isThere=true;
            a = i;
        }
    }
    isThere ? cout << "o número existe no vetor e está no índice " << a : cout << "número não localizado";
    cout << "\n\n";
    return 0;
}