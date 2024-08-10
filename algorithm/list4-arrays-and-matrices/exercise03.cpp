#include <iostream>
using namespace std;

int main() {
    system("clear");
    int arr[15], ask;
    for(int i=0; i<15; i++) {
        cout << "informe um número inteiro: ";
        cin >> arr[i];
    }
    system("clear");
    cout << "quais elementos deseja ler, par-2 ou ímpar-1: ";
    cin >> ask;

    if(ask==1) {
        for(int i=0; i<15; i++) {
            if(arr[i]%2!=0) {
                cout << arr[i] << " ";
            }
        }
    } else if(ask==2) {
        for(int i=0; i<15; i++) {
            if(arr[i]%2==0) {
                cout << arr[i] << " ";
            }
        }
    }
    return 0;
}