#include <iostream>
using namespace std;

int arrayInverter(int *v1, int *v2, int n);

int main() {
    system("clear");
    int arr1[] = {1, 2, 3, 4, 5}, arr2[] = {1, 1, 1, 1, 1}, n=5;
    cout << "maior valor: " << arrayInverter(arr1, arr2, n) << "\n";
    for(int i=0; i<n; i++) {
        cout << arr2[i] << "\n";
    }
    return 0;
}

int arrayInverter(int *v1, int *v2, int n) {
    int max=0;
    for(int i=0; i<n; i++) {
        if(max<v1[i])
            max=v1[i];
        v2[i]=v1[4-i];
    }
    return max;
}