#include <iostream>
using namespace std;

bool wordSearcher(string sentence, string word);

int main() {
    system("clear");
    string sentence, word;

    cout << "informe a frase: ";
    getline(cin, sentence);
    cout << "informe a palavra: ";
    cin >> word;

    if(wordSearcher(sentence, word)) {
        cout << "\nSucesso! A palavra foi encontrada";
    } else {
        cout << "\nFalha! A palavra não foi encontrada";
    }
    cout << "\n\n";

    return 0;
}

bool wordSearcher(string sentence, string word) {
    int i=0, j=0;
    bool found = false;
    do {
        if(sentence[i]==word[j]) {
            do {
                if(word[++j]=='\0')
                    found = true;
            }while(sentence[++i]==word[j]&&word[j]!='\0');
        }
        j=0;
    }while(sentence[i++]!='\0'&&!found);

    return found;
}  