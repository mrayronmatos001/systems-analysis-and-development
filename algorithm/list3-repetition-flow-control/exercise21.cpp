#include <iostream>
using namespace std;

int main() {
    system("clear");
    int age;
    float amount=0, discount=0, ticketPrice;
    cout << "\ninforme o preço do bilhete: ";
    cin >> ticketPrice;
    do {
        cout << "\ninforme a idade do comprador: ";
        cin >> age;
        if(age==0) {

        } else if(age<6) {
            discount += ticketPrice;
        } else if(age>=6 && age<=12) {
            discount += ticketPrice*0.7;
            amount += ticketPrice*0.3;
        } else if((age>12 && age<=18) || age>60) {
            discount += ticketPrice*0.5;
            amount += ticketPrice*0.5;
        } else {
            amount += ticketPrice;
        }
    }while(age!=0);
    cout << "\no valor arrecadado foi de R$" << amount << " e o desconto total foi de R$" << discount << "\n\n";
    return 0;
}