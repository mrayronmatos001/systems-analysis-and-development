#include <iostream>
using namespace std;

struct human {
    string name;
    char gender;
    string eyeColors;
    float tall;
    float weight;
    string birthday;
};

int main() {
    system("clear");
    int n;
    cout << "informe a quantidade de pessoas que deseja cadastrar: ";
    cin >> n;
    human hs[n];
    cout << "\n";
    getchar();
    for(int i=0; i<n; i++) {
        cout << "informe o nome da " << i+1 << "º pessoa: ";
        getline(cin, hs[i].name);
        cout << "informe o gênero M-masculino e F-feminino: ";
        cin >> hs[i].gender;
        getchar();
        cout << "informe a cor dos olhos: ";
        getline(cin, hs[i].eyeColors);
        cout << "informe a altura: ";
        cin >> hs[i].tall;
        cout << "informe o peso: ";
        cin >> hs[i].weight;
        getchar();
        cout << "informe a data de aniversáiro: ";
        getline(cin, hs[i].birthday);
        system("clear");
    }
    cout << "\nlista de homens: \n";
    for(int i=0; i<n; i++) {
        if(hs[i].gender=='M') {
            cout << "nome: " << hs[i].name << "\n"
                 << "cor dos olhos: " << hs[i].eyeColors << "\n"
                 << "altura: " << hs[i].tall << "\n"
                 << "peso: " << hs[i].weight << "\n"
                 << "data de aniversário: " << hs[i].birthday << "\n\n";
        }
    }
    cout << "\nlista de mulheres: \n";
    for(int i=0; i<n; i++) {
        if(hs[i].gender=='F') {
            cout << "nome: " << hs[i].name << "\n"
                 << "cor dos olhos: " << hs[i].eyeColors << "\n"
                 << "altura: " << hs[i].tall << "\n"
                 << "peso: " << hs[i].weight << "\n"
                 << "data de aniversário: " << hs[i].birthday << "\n\n";
        }
    }
    return 0;
}