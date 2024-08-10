#include <iostream>
using namespace std;

int main() {
    system("clear");
    int num, factory, denFactory, j;
    float total=0;
    do {
        cout << "informe um número positivo e menor que 20: ";
        cin >> num;
    }while(num<0||num>=20);
    cout << "\n";
    for(int i=num;i>=0;i--) {
        j=0;
        factory=1;
        while(j<=i) {
            if((i-j)==0||(i-j)==1) {
                factory*=1;
            } else {
                factory*=(i-j);
            }
            j++;
        }
        cout << i << "!/";
        j=(num-i)*2;
        denFactory=1;
        if(i==0) {
            cout << j << "!";
        } else {
            cout << j << "! - ";
        }
        while(j>=0) {
            if(j==0||j==1) {
                denFactory*=1;
            } else {
                denFactory*=j;
            }
            j--;
        }
        if(i==num) {
            total=(float)factory/denFactory;
        } else {
            total-=((float)factory/denFactory);
        }
    }
    cout<<"\n\no valor total foi de " << total << "\n\n";
    return 0;
}