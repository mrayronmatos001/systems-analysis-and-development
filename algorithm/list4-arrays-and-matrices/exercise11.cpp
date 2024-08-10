#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    system("clear");
    srand(time(0));
    int num = rand() % 100, arr[20], oddSum, pairSum;
    pairSum = oddSum = 0;
    arr[0]=num;
    for(int i=1; i<20; i++) {
        arr[i]=arr[i-1]*2;
    }
    for(int i=0; i<20; i++) {
        if(arr[i]%2==0) {
            pairSum+=arr[i];
        } else {
            oddSum+=arr[i];
        }
    }
    cout << "o vetor é ";
    for(int i=0; i<20; i++) {
        cout << arr[i] << " ";
    }
    cout << "\na soma dos números pares: " << pairSum;
    cout << "\na soma dos números ímpares: " << oddSum << "\n\n";
    return 0;
}