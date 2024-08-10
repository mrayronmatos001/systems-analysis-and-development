#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int randomNum = rand()%10+1, attempches=0, playerNum;
    
    do {
        system("clear");
        cout << "\n\n[" << 3-attempches << " vidas]";
        cout << "\n\njogue um número entre 1 e 10: ";
        cin >> playerNum;

        if(attempches<2) { 
            if(playerNum<randomNum) {
            cout << "tente um número maior";
            } else if(playerNum>randomNum) {
            cout << "tente um número menor";
            };
        }

        attempches++;
    }while(playerNum != randomNum && attempches<3);

    system("clear");

    playerNum == randomNum ? cout << "\nvocê acertou!!\n\n" : cout << "\nque pena, acabaram suas vidas\n\n";

    return 0;
}