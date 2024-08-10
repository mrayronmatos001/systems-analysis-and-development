//Valendo 0,5 ponto para quem enviar um algoritmo em C++ que leia um vetor de 20 elementos inteiros e um
//número inteiro, utilizando APENAS UMA função, informe se o número existe no vetor E em qual posição se
// encontra, se existir.
#include <iostream>
using namespace std; 

struct Anwser {
    bool logic;
    int i;
};

Anwser vectorFetcher(int element, int *p, int lengh);

int main() {
    system("clear");
    int v[3], element;
    const int lengh=20;
    for(int i=0; i<lengh; i++) {
        cout << "informe um número para o vetor na posição " << i << ": ";
        cin >> v[i];
    }
    cout << "informe um número para verificar na busca: ";
    cin >> element;

    Anwser result = vectorFetcher(element, v, lengh);
    if(result.logic) {
        cout << "\no elemento existe no vetor e se encontra na posição " << result.i;
    }else {
        cout << "\no elemento não existe no vetor!";
    }
    cout << "\n\n";
    return 0;
}

Anwser vectorFetcher(int element, int *p, int lengh) {
    Anwser a1;
    a1.logic=false;
    for(int i=0; i<lengh; i++) {
        if(element==p[i]) {
            a1.logic=true;
            a1.i=i;
            return a1;
        }
    }
    return a1;
}