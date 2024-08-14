#include <iostream>
using namespace std;

struct worder {
    char word;
    int qty;
};

void wordMaper(worder *ws, string sentence, int *c);
void readWordMap(worder *ws, int iCounter);

int main() {
    system("clear");
    string sentence;
    int iCounter=0;

    cout << "digite uma frase: ";
    getline(cin, sentence);

    worder worders[sentence.size()];

    wordMaper(worders, sentence, &iCounter);
    readWordMap(worders, iCounter);

    return 0;
}

void wordMaper(worder *ws, string sentence, int *c) {
    int j, wCounter;
    bool isThere = true;
    do {
        for(int i=0; i<sentence.size(); i++) {
            if(sentence[i]!='\0'&&sentence[i]!=' '&&sentence[i]!=':'&&sentence[i]!='.'&&sentence[i]!='?'&&sentence[i]!='!') {
                j=i+1;
                wCounter=1;
                for(j; j<sentence.size(); j++) {
                    if(sentence[i]==sentence[j]) { 
                        wCounter++;
                        sentence[j]=' ';
                    }
                }
                ws[*c].word = sentence[i];
                ws[*c].qty = wCounter;
                sentence[i] = ' ';
                *c += 1;
            } else {
                isThere = false;
            }
        }
    }while(isThere);
}

void readWordMap(worder *ws, int iCounter) {
    for(int i=0; i<iCounter; i++) {
        cout << "'" << ws[i].word << "'" << " aparece ";
        ws[i].qty>1 ? cout << ws[i].qty << " vezes" : cout << "1 vez";
        cout << "\n";
    }
    cout << "\n\n";
}