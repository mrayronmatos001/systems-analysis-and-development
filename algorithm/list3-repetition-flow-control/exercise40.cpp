#include <iostream>
using namespace std;

int main() {
    system("clear");
    int option, voteCounter, voteQtyCandidate1, voteQtyCandidate2, voteQtyCandidate3, whiteVotes, nullVotes;
    voteQtyCandidate1 = voteQtyCandidate2 = voteQtyCandidate3 = whiteVotes = nullVotes = 0;
    voteCounter = -1;
    do {
        system("clear");
        voteCounter++;

        cout << "-----------------------------";
        cout << "\n\n\tMENU ELEIÇÃO\t\n\n";
        cout << "-----------------------------";
        cout << "\n\n0 - Finalizar Votação";
        cout << "\n1 - Candidato 1";
        cout << "\n2 - Candidato 2";
        cout << "\n3 - Candidato 3";
        cout << "\n4 - Voto em branco";
        cout << "\n5 - Voto nulo";
        cout << "\n\n-----------------------------";
        cout << "\n\ninforme seu voto: ";
        cin >> option;

        switch (option) {
            case 1: 
                voteQtyCandidate1++;
                break;
            case 2:
                voteQtyCandidate2++;
                break;
            case 3:
                voteQtyCandidate3++;
                break;
            case 4:
                whiteVotes++;
                break;
            case 5:
                nullVotes++;
        }

    }while(option!=0);

    cout << "\nvotos totais: " << voteCounter;
    cout << "\ncandidato 1: " << voteQtyCandidate1;
    cout << "\ncandidato 2: " << voteQtyCandidate2;
    cout << "\ncandidato 3: " << voteQtyCandidate3;
    cout << "\nvotos brancos: " << whiteVotes;
    cout << "\nvotos nulos: " << nullVotes << "\n\n";
    
    return 0;
}