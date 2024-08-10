#include <iostream>
using namespace std;

int main() {
    int const CHICO_INITIAL_HEIGHT = 150, JUCA_INITIAL_HEIGHT = 110, CHICO_GROWTHING_RATE = 2, JUCA_GROWTHING_RATE = 3;
    int chico_height = CHICO_INITIAL_HEIGHT, juca_height = JUCA_INITIAL_HEIGHT, years=0;

    while((chico_height >= juca_height)) {
        chico_height += CHICO_GROWTHING_RATE;
        juca_height += JUCA_GROWTHING_RATE;
        years++;
    }

    cout << "\n\nserão necessários " << years << " anos" << endl << endl;

    return 0;
}