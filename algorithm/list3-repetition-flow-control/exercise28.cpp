#include <iostream>
using namespace std;

int main() {
    system("clear");
    int initDay, initMonth, initYear, finDay, finMonth, finYear, initCounter=0, finCounter=0, days=0;

    do {
        initCounter++;
        if(initCounter>1) cout << "data inicial inválida, por favor escolha uma data válida.";

        initCounter>=1? cout << "\n\ninforme uma data inicial (xx xx xxxx): " : cout << "informe uma data inicial (xx xx xxxx): ";
        cin >> initDay >> initMonth >> initYear;

    }while(
        (initDay<1||initDay>31)||
        (initMonth<1||initMonth>12)||
        (initDay==31&&(initMonth==4||initMonth==6||initMonth==9||initMonth==11))||
        (initDay>29&&initMonth==2&&((initYear%4==0&&initYear%100!=0)||(initYear%400==0)))||
        (initDay>28&&initMonth==2&&((initYear%4!=0)&&(initYear%400!=0)))
    );
    
    cout << "data inicial válida.";

    do {
        finCounter++;
        if(finCounter>1) cout << "data final inválida, por favor escolha uma data válida.";
        
        cout << "\n\ninforme uma data final (xx xx xxxx): ";
        cin >> finDay >> finMonth >> finYear;

    }while(
        (finDay<1||finDay>31)||
        (finMonth<1||finMonth>12)||
        (finYear<initYear)||
        (finYear>=initYear&&finMonth<initMonth)||
        (finYear>=initYear&&finMonth>=initMonth&&finDay<initDay)||
        (finDay==31&&(finMonth==4||finMonth==6||finMonth==9||finMonth==11))||
        (finDay>29&&finMonth==2&&((finYear%4==0&&finYear%100!=0)||(finYear%400==0)))||
        (finDay>28&&finMonth==2&&((finYear%4!=0)&&(finYear%400!=0)))
    );

    cout << "data final válida.";

    if(initMonth==1||initMonth==3||initMonth==5||initMonth==7||initMonth==8||initMonth==10||initMonth==12) {
        days = 31 - initDay;
    } else if(initMonth==2&&((initYear%4==0&&initYear%100!=0)||initYear%400==0)) {
        days = 29 - initDay;
    } else if(initMonth==2&&(initYear%4!=0||initYear%400!=0)) {
        days = 28 - initDay;
    } else {
        days = 30 - initDay;
    }

    if(initMonth!=finMonth||(initYear!=finYear&&initMonth==finMonth)) {
        days += finDay;
    }

    cout << "\n\n[cout]: " << days << "\n";

    for(int i=initYear; i<=finYear; i++) {
        if(finYear-initYear>1) {
            if(i==initYear) {
                for(int j=initMonth+1; j<=12; j++) {
                    if(j==1||j==3||j==5||j==7||j==8||j==10||j==12) {
                        days += 31;
                    } else if(j==2&&((initYear%4==0&&initYear%100!=0)||initYear%400==0)) {
                        days += 29;
                    } else if(j==2&&(initYear%4!=0||initYear%400!=0)) {
                        days += 28;
                    } else {
                        days += 30;
                    }
                }
            } else if(i!=initYear&&i!=finYear) {
                if(((i%4==0&&i%100!=0)||i%400==0)) {
                    days += 366;
                } else {
                    days +=365;
                }
            } else {
                for(int j=1; j<finMonth; j++) {
                    if(j==1||j==3||j==5||j==7||j==8||j==10||j==12) {
                        days += 31;
                    } else if(j==2&&((finYear%4==0&&finYear%100!=0)||finYear%400==0)) {
                        days += 29;
                    } else if(j==2&&(finYear%4!=0||finYear%400!=0)) {
                        days += 28;
                    } else {
                        days += 30;
                    }
                }
            }
        } else if(finYear-initYear==1) {
            if(i==initYear) {
                for(int j=initMonth+1; j<=12; j++) {
                    if(j==1||j==3||j==5||j==7||j==8||j==10||j==12) {
                        days += 31;
                    } else if(j==2&&((initYear%4==0&&initYear%100!=0)||initYear%400==0)) {
                        days += 29;
                    } else if(j==2&&(initYear%4!=0||initYear%400!=0)) {
                        days += 28;
                    } else {
                        days += 30;
                    }
                }
            } else {
                for(int j=1; j<finMonth; j++) {
                    if(j==1||j==3||j==5||j==7||j==8||j==10||j==12) {
                        days += 31;
                    } else if(j==2&&((i%4==0&&i%100!=0)||i%400==0)) {
                        days += 29;
                    } else if(j==2&&(i%4!=0||i%400!=0)) {
                        days += 28;
                    } else {
                        days += 30;
                    }
                }
            }
        } else {
            for(int j=initMonth+1; j<finMonth; j++) {
                if(j==1||j==3||j==5||j==7||j==8||j==10||j==12) {
                    days += 31;
                } else if(j==2&&((initYear%4==0&&initYear%100!=0)||initYear%400==0)) {
                    days += 29;
                } else if(j==2&&(initYear%4!=0||initYear%400!=0)) {
                    days += 28;
                } else {
                    days += 30;
                }

                cout << "\n[cout]: " << days << "\n";
            }
        }
    }

    cout << "\n\nentre essas duas datas passaram-se " << days << " dias\n\n";

    return 0;
}