#include <iostream>
using namespace std;

void scalarMultiplierOfVectors(int *v1, int *v2, int x, int n);

int main() {
    system("clear");
    #include <iostream>
    using namespace std;

    int arr1[] = {1, 2, 3, 4, 5}, arr2[] = {1, 1, 1, 1, 1}, n=5, x=3;
    scalarMultiplierOfVectors(arr1, arr2, x, n);
    for(int i=0; i<n; i++) {
        cout << arr2[i] << "\n";
    }
        
    return 0;
}

void scalarMultiplierOfVectors(int *v1, int *v2, int x, int n) {
    cout << "x: " << x << "\n";
    for(int i=0; i<n; i++) {
        v2[i]=x*v1[i];
    }
}