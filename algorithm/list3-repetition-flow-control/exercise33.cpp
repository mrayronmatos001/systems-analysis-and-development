#include <iostream>
using namespace std;

int main() {
    system("clear");
    int num ,counter=1, c1=3, c2=0, n1=1, n2=4;
    cout << "informe em qual termo deseja parar: ";
    cin >> num;
    while(counter<=num) {
        c1++;
        c2++;
        if(c1>=3) {
            cout << n1 << " ";
            n1++;
            c1=0;
        }
        if(c2==2) {
            cout << n2 << " ";
        } else if(c2==3) {
            cout << n2 << " ";
            n2++;
            c2=0;
        }
        counter++;
    }

    cout << "\n\n";
    return 0;
}