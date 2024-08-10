#include <iostream>
using namespace std;

int main() {
    system("clear");
    int arr[20], cod;
    for(int i=0; i<20; i++) {
        cout << "informe um valor inteiro: ";
        cin >> arr[i];
    }
    cout << "\ninforme um código [1/2]: ";
    cin >> cod;
    cout << "\n";
    if(cod==1) {
        for(int i=0; i<20; i++) {
            cout << arr[i] << " ";
        }
        cout <<"\n";
    } else if(cod==2) {
        for(int i=19; i>=0; i--) {
            cout << arr[i] << " ";
        }
    }
    return 0;
}