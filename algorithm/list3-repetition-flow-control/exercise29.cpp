#include <iostream>
#include <random>
#include <ctime>
using namespace std;

int main() {
    system("clear");
    int a, b, c, order, major, lower, middle, randIndex;

    do {
        srand(time(0));
        bool majorChecked=false, middleChecked=false, lowerChecked=false;

        do {
            cout << "informe o valor de 'a, b e c' e se deseja colocalos na ordem 1-crescente, 2-decrescente ou 3-aleatória: ";
            cin >> a >> b >> c >> order;
        }while(order!=1&&order!=2&&order!=3);

        if(a>b && a>c) {
            major = a;
        } else if (b>c) {
            major = b;
        } else {
            major = c;
        }

        if((a<b&&a>c)||(a<c&&a>b)) {
            middle = a;
        } else if((b<a&&b>c)||(b<c&&b>a)) {
            middle = b;
        } else {
            middle = c;
        }

        if(a<b&&a<c) {
            lower = a;
        } else if(b<c) {
            lower = b;
        } else {
            lower = c;
        }

        switch (order) {
            case 1:
                cout << "\n" << lower << " " << middle << " " << major << "\n\n";
                break;
            case 2:
                cout << "\n" << major << " " << middle << " " << lower << "\n\n";
                break;
            case 3:
                cout << "\n";
                while(!majorChecked||!middleChecked||!lowerChecked) {
                    randIndex = rand()%3;
                    if(randIndex==0&&!majorChecked) {
                        majorChecked = true;
                        if(majorChecked&&!middleChecked&&!lowerChecked) {
                            cout << major;
                        } else {
                            cout << " " << major;
                        }
                    } else if(randIndex==1&&!middleChecked) {
                        middleChecked = true;
                        if(!majorChecked&&middleChecked&&!lowerChecked) {
                            cout << middle;
                        } else {
                            cout << " " << middle;
                        }
                    } else if(randIndex==2&&!lowerChecked) {
                        lowerChecked = true;
                        if(!majorChecked&&!middleChecked&&lowerChecked) {
                            cout << lower;
                        } else {
                            cout << " " << lower;
                        }
                    }               
                }
                cout << "\n\n";

        }
    }while(a!=0&&b!=0&&c!=0);

    return 0;
}