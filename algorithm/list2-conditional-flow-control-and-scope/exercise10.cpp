#include <iostream>
using namespace std;

int main() {
    const int LAB_WEIGHT = 2, SEMESTER_EVALUATION_WEIGHT = 3, FINAL_EXAM_WEIGHT = 5;
    float score1, score2, score3, average;
    cout << "informe as 3 notas do aluno para calcular a média ponderada: ";
    cin >> score1 >> score2 >> score3;

    average = ( (score1 * LAB_WEIGHT) + (score2 * SEMESTER_EVALUATION_WEIGHT) + (score3 * FINAL_EXAM_WEIGHT) ) / (float)(LAB_WEIGHT + SEMESTER_EVALUATION_WEIGHT + FINAL_EXAM_WEIGHT);

    cout << "\na média será de " << average << endl << endl;

    return 0;
}