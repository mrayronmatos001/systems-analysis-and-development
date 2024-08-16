#include <iostream>
using namespace std;


struct node {
    int value;
    node *next;
};

void dismissList(node *list);
void removeElement(node *&list, int value, int *counter);
void printList(node *list);
void addElement(node *&head, int value);

int main() {
    system("clear");
    int option, counter=0, value, listCounter=0;
    node *list = nullptr;
    do {
        if(counter!=0)
            system("read -p 'Pressione alguma tecla para continuar...' var");
        system("clear");
        counter++;
        cout << "          MENU PRINCIPAL          " << "\n";
        cout << "----------------------------------" << "\n";
        cout << " 1 - ADICIONAR ELEMENTO           " << "\n";
        cout << " 2 - REMOVER ELEMENTO             " << "\n";
        cout << " 3 - MOSTRAR TODOS OS ELEMENTOS   " << "\n";
        cout << " 4 - SAIR                         " << "\n";
        cout << "----------------------------------" << "\n";
        cout << "digite uma opção: ";
        cin >> option;

        switch(option) {
            case 1:
                listCounter++;
                cout << "informe o valor que você deseja adicionar: ";
                cin >> value;
                addElement(list, value);
                cout << "\n";
                break;
            case 2:
                cout << "informe qual elemento você deseja remover: ";
                cin >> value;
                removeElement(list, value, &listCounter);
                cout << "\n\n";
                break;
            case 3:
                printList(list);
                cout << "\n";    
        }
    }while(option!=4);
    return 0;
}

void addElement(node *&head, int value) {
    node *newNode = new node();
    newNode->value = value;
    newNode->next = nullptr;

    if(head==nullptr)
        head=newNode;
    else {
        node *current=head;
        while(current->next!=nullptr)
            current = current->next;
        current->next = newNode;
    }
}

void printList(node *list) {
    if(list==nullptr)
        cout << "\nlista vazia";
    else {
        node *current = list;
        do {
            cout << current->value << "\n";
            current = current->next;
        }while(current!=nullptr);
    }

}

void removeElement(node *&list, int value, int *counter) {
    int position=0;
    bool isThere=false;
    node *current = list;
    node *aux;
    for(int i=0; i<*counter; i++) {
        if(current->value==value) {
             position=i;
             isThere=true;
        }
        current = current->next;
    }
    current = list;
    if(isThere&&position>0) {
        for(int i=0; i<position; i++) {
            aux = current;
            current = current->next;
        }
        aux->next = current->next;
        delete current;
        (*counter)--;
        cout << "\neliminado com sucesso";
    } else if(isThere&&position==0) {
        list = current->next;
        delete current;
        (*counter)--;
        cout << "\neliminado com sucesso";
    } else 
        cout << "\nelemento não existe";
}

void dismissList(node *list) {
    while(list!=nullptr) {
        node *current = list;
        list = current->next;
        delete current;
    }
}