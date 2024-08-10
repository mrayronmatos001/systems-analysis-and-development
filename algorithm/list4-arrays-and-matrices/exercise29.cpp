#include <iostream>
using namespace std;

int main() {
    system("clear");
    int player, attempts=0, line, column;
    char gameBoard[3][3], swapper;
    bool victory=false;
    for(int i=0; i<3; i++) {
        cout << "| ";
        for(int j=0; j<3; j++) {
            gameBoard[i][j]='-';
            cout << gameBoard[i][j] << " ";
        }
        cout << "|\n";
    }
    cout << "\nquem inicia o jogo? escolha 1-bola ou 0-x: ";
    cin >> player;
    cout << "\n";
    do {
        do {
            cout << "\nescolha uma jogada válida no tabuleiro informando a posição da linha e coluna: ";
            cin >> line >> column;
        }while(gameBoard[line][column]!='-');
        if(player) {
            swapper='o';
            player=0;
        } else {
            swapper='x';
            player=1;
        }
        gameBoard[line][column]=swapper;
        if(((gameBoard[0][0]==gameBoard[0][1]&&gameBoard[0][1]==gameBoard[0][2])&&gameBoard[0][0]!='-')||
           ((gameBoard[1][0]==gameBoard[1][1]&&gameBoard[1][1]==gameBoard[1][2])&&gameBoard[1][0]!='-')||
           ((gameBoard[2][0]==gameBoard[2][1]&&gameBoard[2][1]==gameBoard[2][2])&&gameBoard[2][0]!='-')||
           ((gameBoard[0][0]==gameBoard[1][0]&&gameBoard[1][0]==gameBoard[2][0])&&gameBoard[0][0]!='-')||
           ((gameBoard[0][1]==gameBoard[1][1]&&gameBoard[1][1]==gameBoard[2][1])&&gameBoard[0][1]!='-')||
           ((gameBoard[0][2]==gameBoard[1][2]&&gameBoard[1][2]==gameBoard[2][2])&&gameBoard[0][2]!='-')||
           ((gameBoard[0][0]==gameBoard[1][1]&&gameBoard[1][1]==gameBoard[2][2])&&gameBoard[0][0]!='-')||
           ((gameBoard[0][2]==gameBoard[1][1]&&gameBoard[1][1]==gameBoard[2][0])&&gameBoard[0][2]!='-')
        ) victory=true;
        system("clear");
        for(int i=0; i<3; i++) {
            cout << "| ";
            for(int j=0; j<3; j++) {
                cout << gameBoard[i][j] << " ";
            }
            cout << "|\n";
        }
        attempts++;
    }while((attempts<9)&&(!victory));
    if(attempts>=9) {
        cout << "\no jogo deu velha, sem ganhador! ";
    } else {
        cout << "\nparabéns jogador ";
        player==1?cout<<"x, você foi o vencedor!":cout<<"o, você foi o vencendor!";
        cout << "\n\n";
    }
    return 0;
}