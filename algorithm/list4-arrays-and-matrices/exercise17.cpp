#include <iostream>
using namespace std;

int main() {
    system("clear");
    int arr[20];
    bool isAscending, isDescending;
    isAscending = isDescending = true;
    for(int i=0; i<20; i++) {
        cout << "informe um número inteiro ";
        cin >> arr[i];
    }
    for(int i=0; i<20; i++) {
        if(arr[i+1]<arr[i]) {
            isAscending=false;
        } else if(arr[i+1]>arr[i]) {
            isDescending=false;
        }
    }
    cout << "\n";
    if(!isAscending&&!isDescending) {
        cout << "aleatório";
    } else if(isAscending) {
        cout << "crescente";
    } else {
        cout << "decrescente";
    }
    cout << "\n\n";
    return 0;
}