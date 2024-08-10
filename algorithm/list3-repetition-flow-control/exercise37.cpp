#include <iostream>
using namespace std;

int main() {
    system("clear");
    int integer, asker=1;
    float num, floater;
    do {
        cout << "informe um número: ";
        cin >> num;
        if(num>=0) {
            integer = num;
            floater = num - integer;
        } else {
            integer = -1 * num;
            floater = (-1 * num) - integer;
        }
        if(floater>0.5) {
            integer++;
        } else if(floater<0.5){
            
        } else {
            do {
                cout << "deseja arredondar para cima-1 ou para baixo-0? ";
                cin >> asker;
            }while(asker!=1&&asker!=0);
            if((asker==1&&num>=0)||(asker==0&&num<0)) {
                integer++;
            }
        }
        cout << (num>=0?integer:(-1*integer)) << "\n\n";
    }while(num!=0);
    return 0;
}