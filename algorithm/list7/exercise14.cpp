#include <iostream>
using namespace std;

int *repeatedLetterFinder(int *v, string str, char letter, int *stop);

int main() {
    system("clear");
    int length, stop, *array;
    char letter;
    string str;

    cout << "informe um texto qualquer: ";
    getline(cin, str);
    cout << "qual caractere deseja procurar na string: ";
    cin >> letter;
    length=str.length();
    int v[length+1];
    array=repeatedLetterFinder(v, str, letter, &stop);
    for(int i=0; i<stop+1; i++) {
        cout << array[i] << "\n";
    }

    return 0;
}

int *repeatedLetterFinder(int *v, string str, char letter, int *stop) {
    int i=0, counter=0;
    do {
        if(str[i]==letter) {
            v[counter]=i;
            counter++;
        }
        v[counter]=counter;
        *stop=counter;
    }while(str[i++]!='\0');
    return v;
}  