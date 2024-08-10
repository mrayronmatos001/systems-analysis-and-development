#include <iostream>
using namespace std;

int main() {
    system("clear");
    int personalIncomeQty, costsQty, otherCostQty, peopleCounter;
    float personalIncome, householdIncome, foodCost, otherCost;
    personalIncomeQty = householdIncome = costsQty = otherCostQty = peopleCounter = 0;

    do {
        peopleCounter++;
        cout << "informe sua renda pessoal: ";
        cin >> personalIncome;
        cout << "\ninforme sua renda familiar: ";
        cin >> householdIncome;
        if(personalIncome>householdIncome) {
            personalIncomeQty++;
        }
        cout << "\ninforme sua despesa com outros gastos: ";
        cin >> otherCost;
        if(otherCost>200) {
            otherCostQty++;
        }
        cout << "\ninforme sua despesa com alimentação: \n";
        cin >> foodCost;
        if((foodCost+otherCost)>(personalIncome+householdIncome)) {
            costsQty++;
        }
    }while(personalIncome!=0);
    cout << "\nalunos que gastam acima de R$200,00 com outras despesas: " << ((float)otherCostQty/peopleCounter)*100 << "%";
    cout << "\nalunos com renda pessoal maior do que a familiar: " << ((float)personalIncomeQty/peopleCounter)*100 << "%";
    cout << "\ncustos maiores do que renda: " << ((float)costsQty/peopleCounter)*100 << "%\n\n";
    return 0;
}