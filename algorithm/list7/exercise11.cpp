#include <iostream>
using namespace std;

struct Data {
    int day;
    int month;
    int year;
};

struct tSchool {
    int accurancyRate;
    float grade;
};

tSchool showSchoolResult(char *answerKey, char *studantAnswerKey);
void ticketCalculator(int maxSpeed, int realSpeed, int *speedCondition);
string salaryTracker(float salary, int dependents);
bool isData(Data datas);
int *ordenetor(int *arr, char order);

int main() {
    system("clear");
    int option, arr[3], *array, counter=0, dependents, maxSpeed, realSpeed, speedCondition;
    float salary;
    char order, answerKey[10], studantAnswerKey[10];
    Data datas[5];
    do {
        if(counter!=0)
            system("read -p 'Pressione alguma tecla para continuar...' var");
        counter++;
        system("clear");
        cout << "-----------------------------" << "\n"
             << "       MENU PRINCIPAL        " << "\n"
             << "-----------------------------" << "\n"
             << " 1 - ORDEM                   " << "\n"
             << " 2 - DATA                    " << "\n"
             << " 3 - SALÁRIO                 " << "\n"
             << " 4 - MULTA                   " << "\n"
             << " 5 - CALCULAR                " << "\n"
             << " 6 - SAIR                    " << "\n"
             << " digite uma opção: ";
        cin >> option;

        switch(option) {
            case 1:
                for(int i=0; i<3; i++) {
                    cout << "\ninforme um valor inteiro: ";
                    cin >> arr[i];
                }
                cout << "informe o tipo de ordem que deseja, 'c'-crescente 'd'-decrescente: ";
                cin >> order;
                array=ordenetor(arr, order);
                for(int i=0; i<3; i++) {
                    cout << array[i] << " ";
                }
                cout << "\n\n";
                break;
            case 2:
                for(int i=0; i<5; i++) {
                    cout << "\ninforme dia, mês e ano: ";
                    cin >> datas[i].day >> datas[i].month >> datas[i].year;
                }
                for(int i=0; i<5; i++) {
                    isData(datas[i])?cout<<"true ":cout<<"false ";
                }
                cout << "\n";
                break;
            case 3:
                cout << "\ninforme o salário: ";
                cin >> salary;
                cout << "\ninforme a quantidade de dependentes: ";
                cin >> dependents;
                cout << salaryTracker(salary, dependents) << "\n\n";
                break;
            case 4:
                cout << "\ninforme a velocidade máxima: ";
                cin >> maxSpeed;
                cout << "\ninforme a velocidade do motorista: ";
                cin >> realSpeed;
                ticketCalculator(maxSpeed, realSpeed, &speedCondition);
                switch(speedCondition) {
                    case 1:
                        cout << "\nmulta de R$50";
                        break;
                    case 2:
                        cout << "\nmulta de R$100";
                        break;
                    case 3:
                        cout << "\nmulta de R$200";
                        break;
                    default:
                        cout << "\nmulta de R$0";
                }
                cout << "\n\n";
                break;
            case 5:
                for(int i=0; i<10; i++) {
                    cout << "\ninforme o gabarito da prova e o gabarito do aluno para a questão " << i+1 << ": ";
                    cin >> answerKey[i] >> studantAnswerKey[i];
                }
                tSchool schoolResult;
                schoolResult=showSchoolResult(answerKey, studantAnswerKey);
                cout << "\nporcentagem de acerto: " << schoolResult.accurancyRate;
                cout << "\nnota: " << schoolResult.grade << "\n\n";

        }

    }while(option!=6);
    return 0;
}

int *ordenetor(int *arr, char order) {
    int aux;
    bool swap;
    do {
        swap=false;
        if(order=='c') {
            if(arr[0]>arr[1]) {aux=arr[0]; arr[0]=arr[1]; arr[1]=aux; swap=true;}
            if(arr[1]>arr[2]) {aux=arr[1]; arr[1]=arr[2]; arr[2]=aux; swap=true;}
        } else {
            if(arr[0]<arr[1]) {aux=arr[0]; arr[0]=arr[1]; arr[1]=aux; swap=true;}
            if(arr[1]<arr[2]) {aux=arr[1]; arr[1]=arr[2]; arr[2]=aux; swap=true;}
        }
    }while(swap);

    return arr;
}

bool isData(Data datas) {
    if(datas.day>=1&&(datas.day<=30||(datas.day<=31&&datas.month==1||datas.month==3||datas.month==5||datas.month==7||datas.month==8||datas.month==10||datas.month==12))&&datas.month>=1&&datas.month<=12&&datas.year>=0&&datas.year<=2024) 
        return true;

    return false;
}

string salaryTracker(float salary, int dependents) {
    float childrenCoust=0;
    string strChildrenCoust;
    if(dependents!=0) {
        if(dependents*0.1<=0.5)
            childrenCoust=salary*0.1;
        else
            childrenCoust=(salary*0.5)/dependents;
        }
    if(childrenCoust!=0)
        strChildrenCoust=to_string(childrenCoust);
    else 
        strChildrenCoust="O seu salário é 100% para o seu próprio custeio";
    return strChildrenCoust;
}

void ticketCalculator(int maxSpeed, int realSpeed, int *speedCondition) {
    int difference = realSpeed-maxSpeed;
    if(difference>0&&difference<=10)
        *speedCondition=1;
    else if(difference>10&&difference<=30)
        *speedCondition=2;
    else if(difference>30)
        *speedCondition=3;
    else 
        *speedCondition=0;
}

tSchool showSchoolResult(char *answerKey, char *studantAnswerKey) {
    int accurancyCounter=0;
    tSchool tempSchoolResult;
    for(int i=0; i<10; i++) {
        if(answerKey[i]==studantAnswerKey[i])
            accurancyCounter++;
    }
        tempSchoolResult.accurancyRate = accurancyCounter/10.*100;
        tempSchoolResult.grade = accurancyCounter*1.5;
    return tempSchoolResult;
}