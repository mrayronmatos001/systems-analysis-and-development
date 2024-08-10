#include <iostream>
using namespace std;

int main() {
    system("clear");
    int arr[20], counter=0;
    for(int i=0; i<20; i++) {
        cout << "informe um valor inteiro: ";
        cin >> arr[i];
        if(arr[i]%2==0) {
            arr[i]=0;
            counter++;
        }
    }
    cout << "\n";
    for(int i=0; i<20; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}