#include <iostream>
using namespace std;

int *unionVector(int *x1, int *x2, int n1, int n2, int *qty);

int main() {
    system("clear");
    int x1[5]={1,3,5,6,7}, x2[5]={1,3,4,6,8}, qty, len1, len2;
    len1 = sizeof(x1) / sizeof(x1[0]);
    len2 = sizeof(x2) / sizeof(x2[0]);
    int *x3=unionVector(x1, x2, len1, len2, &qty);
    for(int i=0; i<qty; i++) {
        cout << x3[i] << "\n";
    }
    delete x3;
    return 0;
}

int *unionVector(int *x1, int *x2, int n1, int n2, int *qty) {
    int r[5], d[5], counter=0, counter2=0;
    for(int i=0; i<5; i++) {
        for(int j=0; j<5; j++) {
            if(x1[i]==x2[j]) {
                r[counter]=x1[i];
                counter++;
            }
        }
    }
    for(int i=0; i<n1; i++) {
        bool isDistinct = true;
        for(int j=0; j<counter; j++) {
            if(x1[i]==r[j]) {
                isDistinct = false;
                break;
            }
        }
        if(isDistinct) {
            d[counter2]=x1[i];
            counter2++;
        }
    }
    for(int i=0; i<n2; i++) {
        bool isDistinct = true;
        for(int j=0; j<counter; j++) {
            if(x2[i]==r[j]) {
                isDistinct = false;
                break;
            }
        }
        if(isDistinct) {
            d[counter2]=x2[i];
            counter2++;
        }
    }
    *qty = counter + counter2;
    int *x3 = new int[*qty];
    for(int i=0; i<counter; i++) {
        x3[i]=r[i];
    }
    for(int i=counter; i<counter2+3; i++) {
        x3[i]=d[i-3];
    }
    return x3;
}