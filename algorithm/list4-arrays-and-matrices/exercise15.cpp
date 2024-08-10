#include <iostream>
using namespace std;

int main() {
    system("clear");
    int lengh, counter, counter2;
    float average;
    average = counter = counter2 = 0;
    cout << "informe o tamanho dos vetores ";
    cin >> lengh;
    int M[lengh], N[lengh], majorN[lengh], lowerM[lengh];
    for(int i=0; i<lengh; i++) {
        cout << "informe a matrícula do aluno e a nota ";
        cin >> M[i] >> N[i];
        average+=N[i];
    }
    for(int i=0; i<lengh; i++) {
        if(((float)average/lengh)<N[i]) {
            majorN[counter]=N[i];
            counter++;
        }else if(((float)average/lengh)>N[i]) {
            lowerM[counter2]=M[i];
            counter2++;
        }
    }
    cout << "\na média: " << (float)average/lengh;
    cout << "\nnotas maiores que a média ";
    for(int i=0; i<counter; i++) {
        cout << majorN[i] << " ";
    }
    cout << "\nmatrículas dos alunos com as notas menores do que a média ";
    for(int i=0; i<counter2; i++) {
        cout << lowerM[i] << " ";
    }
    cout << "\n\n";
    return 0;
}