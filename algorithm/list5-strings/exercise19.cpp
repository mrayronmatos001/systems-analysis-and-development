#include <iostream>
using namespace std;

int main() {
    system("clear");
    string str, reverseStr;

    cout << "digite uma frase: ";
    getline(cin, str);

    reverseStr=str;
    for(int i=str.size()-1; i>=0; i--) {
        reverseStr[(str.size()-1)-i]=str[i];
    }

    cout << reverseStr << "\n\n";
    return 0;
}