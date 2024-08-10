#include <iostream>
using namespace std;

int main() {
    int v1, v2, v3, v4;
    system("clear");
    
    do {
        do {
            cout << "informe o primeiro valor: ";
            cin >> v1;
            cout << "informe o segundo valor: ";
            cin >> v2;
            cout << "informe o terceiro valor: ";
            cin >> v3;
            cout << "informe o quarto valor: ";
            cin >> v4;
        }while(v1<0||v2<0||v3<0||v4<0);

        cout << "-----------------\n";
        for(int i=0; i<3; i++) {
            cout << "| ";
            switch(i) {
                case 0:
                    cout << v1 << " | " << v2 << " | " << v3 << " | " << v4;
                    break;
                case 1:
                    cout << v1*v1 << " | " << v2*v2 << " | " << v3*v3 << " | " << v4*v4;
                    break;
                case 2:
                    cout << v1*v1*v1 << " | " << v2*v2*v2 << " | " << v3*v3*v3 << " | " << v4*v4*v4;
                    break;
            }
            cout << " |\n";
            cout << "-----------------\n";
        }
        cout << "Pressione Enter para continuar...";
        cin.ignore();
        cin.get();
        system("clear");
    }while(v1!=0&&v2!=0&&v3!=0&&v4!=0);
        
    cout << "\n";

    return 0;
}