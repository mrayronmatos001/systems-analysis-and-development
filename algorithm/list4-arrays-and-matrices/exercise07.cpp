#include <iostream>
using namespace std;

int main() {
    system("clear");
    int arr1[10], arr2[10], arr3[10];
    for(int i=0; i<10; i++) {
        cout << "informe um número inteiro: ";
        cin >> arr1[i] >> arr2[i];
        arr3[i]=arr1[i]*arr2[i];
    }
    cout << "\no vetor resultante contém: ";
    for(int i=0; i<10; i++) {
        cout << arr3[i] << " ";
    }
    cout << "\n\n";
    return 0;
}