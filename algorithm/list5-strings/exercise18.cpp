#include <iostream>
using namespace std;

string concatenator(string A, string B, string *C);

int main() {
    system("clear");
    string A, B, C;

    cout << "digite uma frase: ";
    getline(cin, A);
    cout << "digite uma outra frase: ";
    getline(cin, B);

    cout << concatenator(A, B, &C)<<"\n";
    return 0;
}

string concatenator(string A, string B, string *C) {
    *C = A + " " + B;
    return *C;
}