#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float a = NAN;
    float b = NAN;
    bool isIndeedNaN = a != b;
    cout << endl << endl;
    cout << isIndeedNaN;
    cout << endl << endl;
}