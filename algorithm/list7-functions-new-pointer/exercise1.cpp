#include <iostream>
using namespace std;

int whoIsMajor(float num1, float num2);
 
int main() {
    system("clear");
    float test1, test2, homeWork1, homeWork2, majorTest, majorHomeWork;

    cout << "informe as notas das provas: ";
    cin >> test1 >> test2;

    cout << "informe as notas dos trabalhos: ";
    cin >> homeWork1 >> homeWork2;

    majorTest=whoIsMajor(test1, test2);
    majorHomeWork=whoIsMajor(homeWork1, homeWork2);

    cout << "média: " << (majorTest + majorHomeWork)/2. << "\n\n";
    return 0;
}

int whoIsMajor(float num1, float num2) {
    float catcher;
    num1>num2? catcher=num1 : catcher=num2;
    return catcher;
}

