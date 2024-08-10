#include <iostream>
using namespace std;

int main() {
    system("clear");
    float height, womanLowerHeight, manHeightAverage=0, heightAverage=0, manCounter=0, womanCounter=0, counter=0;
    char close, gender;

    do {
        system("clear");

        do {
            cout << "informe o seu sexo (m-masculino/f-feminino) e a sua altura: ";
            cin >> gender >> height;
        }while(gender!='m'&&gender!='f');

        if(gender=='f') {
            womanCounter++;
            if(womanCounter==1) {
                womanLowerHeight = height;
            }
        }

        if(gender=='m') {
            manHeightAverage += height;
            manCounter++;
        } else if(height < womanLowerHeight){
            womanLowerHeight = height;
        }

        heightAverage += height;
        counter++;

        cout << "\ninforme com 'X' se deseja encerrar a pesquisa ou qualquer dígito para prosseguir";
        cin >> close;
    }while(close!='X');

    cout << "\na altura mais baixa entre as mulheres foi de " << womanLowerHeight << " e a média da altura dos homens foi de " << manHeightAverage/manCounter << " e a média da altura de todas as pessoas informadas foi de " << heightAverage/counter <<  " ...encerrando programa...\n\n";

    return 0;
}