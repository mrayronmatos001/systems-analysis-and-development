#include <iostream>
using namespace std;

int main() {
    system("clear");
    int qtNum, num, radix, part, sum=0;
    bool isPrime;
    cout << "informe a quantidade de números: ";
    cin >> qtNum;
    for(int i=0; i<qtNum; i++) {
        isPrime=true;
        part=1;
        radix=0;
        cout << "\ninforme um número: ";
        cin >> num;
        while(radix<=num) {
            part++;
            radix=part*part;
            if(num==1||num==2) {
                
            }else if(num%part==0) {
                isPrime=false;
            }
        }
        if(isPrime) {
            sum += num;
        }
    }
    cout << "\no soma deu " << sum << "\n\n";
    return 0;
}