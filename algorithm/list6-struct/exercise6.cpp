#include <iostream>
using namespace std;

struct employee {
    string name;
    int wNum;
    int dNum;
};

int main() {
    const int payment=12, dPayment=40;
    const float inssDeduction=0.085, irDeduction=0.05;
    int stop=0;
    char ask;
    system("clear");
    employee employees[200];
    do {
        cout << "informe o nome do " << stop+1 << "º funcionário: ";
        getline(cin, employees[stop].name);
        cout << "informe a quantidade de horas trabalhadas no mês: ";
        cin >> employees[stop].wNum;
        cout << "informe a quantidade de dependentes: ";
        cin >> employees[stop++].dNum;
        cout << "deseja continuar? Y-sim, N-não ";
        cin >> ask;
    }while(ask!='N'&&stop<200);
    cout << "\nsegue a disposição sobre os funcionários cadastrados: \n\n";
    for(int i=0; i<stop; i++) {
        float grossSalary = employees[i].wNum*payment;
        float inss = grossSalary*inssDeduction;
        float ir = grossSalary*irDeduction;
        cout << "nome: " << employees[i].name << "\n"
        << "salário bruto: " << grossSalary << "\n"
        << "descontos INSS: " << inss << "\n"
        << "descontos IR: " << ir << "\n"
        << "salário líquido: " << grossSalary - inss - ir + employees[i].dNum*dPayment << "\n\n";
    }
    return 0;
}