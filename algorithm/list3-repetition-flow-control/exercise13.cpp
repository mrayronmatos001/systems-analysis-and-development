#include <iostream>
using namespace std;

int main() {
    system("clear");
    int num, i, test=0;

    cout << "\ninforme um número inteiro: ";
    cin >> num;

    i = 1;
    while(test<num) {
        test = i*i;
        i++;
    }

    if(test==num) {
        for(int j=i; j<i+10; j++) {
            cout << j*j << " ";
        } 
    } else {
            cout << "este não é um número quadrangular";
    }

    cout << "\n\n";

    return 0;
}