#include <iostream>
using namespace std;

int main() {
    system("clear");

    int option;
    float a, b, c, area;

    do {
        cout << "\n   Menu";
        cout << "\n\n1-Triângulo";
        cout << "\n2-Quadrado";
        cout << "\n3-Retângulo";
        cout << "\n4-Trapézio";
        cout << "\n5-Círculo";
        cout << "\n6-Sair";
        cout << "\n-----------------";

        cout << "\n\nescolha uma opção: ";
        cin >> option;

        cout << "informe o valor ";
        switch(option) {
            case 1:
                cout << "da base e da altura: ";
                cin >> a >> b;

                area = a * b / 2;
                break;
            case 2:
                cout << "do lado: ";
                cin >> a;

                area = a * a;
                break;
            case 3:
                cout << "dos dois lados diferentes: ";
                cin >> a >> b;

                area = a * b;
                break;
            case 4:
                cout << "da base menor, maior e da altura: ";
                cin >> a >> b >> c;

                area = (b-a) * c / 2;
                break;
            case 5:
                cout << "do raio do círculo";
                cin >> a;

                area = 3.14 * a * a;
                break;
        }

        cout << "\na área do polígono desejado é " << area;
        cout << "\n\npressione a tecla Enter pra continuar...";
        cin.ignore();
        cin.get();
        system("clear");
    }while(option!=6);
    
    return 0;
}