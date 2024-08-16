#include <iostream>
using namespace std;

void minMax(int *v, int min, int max);

int main() {
    system("clear");
    int arr[10], min, max;
    for(int i=0; i<10; i++) {
        cout << "informe o valor na posição " << i << ": ";
        cin >> arr[i];
    }
    cout << "informe o min e o max: ";
    cin >> min >> max;
    minMax(arr, min, max);
}

void minMax(int *v, int min, int max) {
    int vmin, vmax=0;
    for(int i=0; i<10; i++) {
        if(i==0)
            vmin=v[0];
        else if(vmin>v[i])
            vmin=v[i];
        else if(vmax<v[i])
            vmax=v[i];
    }
    for(int i=0; i<10; i++) {
        if(v[i]==vmax)
            v[i]=max;
        else if(v[i]==vmin)
            v[i]=min;
    }
}