#include <iostream>
using namespace std;

int main() {
    float height;
    char gender;
    cout << "informe a altura em metros (x.xx) e o gênero (m ou f): ";
    cin >> height >> gender;

    cout << "\nnesse caso, o peso ideal para essa altura é de ";

    if(gender=='m') {
        cout << (72.7*height - 58);
    } else {
        cout << (62.1*height - 44.7);
    }

    cout << "kg\n" << endl;

    return 0;
}