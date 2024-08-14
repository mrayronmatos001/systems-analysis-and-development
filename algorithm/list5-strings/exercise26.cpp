#include <iostream>
using namespace std;

int main() {
    system("clear");
    int i = 0;
    string str, wStr;

    cout << "Digite um texto: ";
    getline(cin, str);

    do {    
        if (str[i] != 'a' && str[i] != 'A' && str[i] != 'à' && str[i] != 'á' &&
            str[i] != 'e' && str[i] != 'E' && str[i] != 'é' &&
            str[i] != 'i' && str[i] != 'I' && str[i] != 'í' &&
            str[i] != 'o' && str[i] != 'O' && str[i] != 'ó' && str[i] != 'õ' &&
            str[i] != 'u' && str[i] != 'U' && str[i] != 'ú') {
            wStr += str[i];
        }
    } while (str[i++] != '\0');

    cout << wStr << "\n\n";
    return 0;
}
