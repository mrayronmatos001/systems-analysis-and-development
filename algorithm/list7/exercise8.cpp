#include <iostream>
using namespace std;

float oneDecimalDigit(float average);
char studantSituation(float p1, float p2, float p3, int absences, int classersTotal, float *a);

int main() {
    system("clear");
    int absences, classersTotal;
    float g1, g2, g3, average=0;
    char situation;
    cout << "informe 3 notas e qtd de faltas e de aulas: ";
    cin >> g1 >> g2 >> g3 >> absences >> classersTotal;
    situation=studantSituation(g1, g2, g3, absences, classersTotal, &average)=='A';
    cout << "média: " << oneDecimalDigit(average) << "\nsituação: ";
    if(situation=='A')
        cout << "APROVADO";
    else if(situation=='R')
        cout << "REPROVADO";
    else 
        cout << "REPROVADO POR FALTAS";
    return 0;
}

char studantSituation(float p1, float p2, float p3, int absences, int classersTotal, float *a) {
    *a=(p1+p2+p3)/3.;
    if((float)(absences/classersTotal)<=0.25) {
        if(*a>=6)
            return 'A';
        else
            return 'R';
    } else 
        return 'F';
    cout << "\n\n";
}

float oneDecimalDigit(float average) {
    int integer = average, integerD;
    float decimal = average - integer;
    decimal*=10;
    integerD = decimal;
    decimal = integerD/10.;
    return integer + decimal;
}