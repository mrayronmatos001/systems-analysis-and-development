#include <iostream>
using namespace std;

int main() {
    system("clear");
    int i=0, j=0, k=0;
    bool end1=false, end2=false;
    string str1, str2, str3;
     
    cout << "digite um texto qualquer: ";
    getline(cin, str1);
    cout << "digite um outro texto qualquer: ";
    getline(cin, str2);

    do {
        if(str1[j]=='\0')
            end1=true;
        if(str2[k]=='\0')
            end2=true;
        if(i%2==0&&!end1)
            str3+=str1[j++];
        else if(!end1)
            str3+=str1[j++];
        if(i%2!=0&&!end2)
            str3+=str2[k++];
        else if(!end2)
            str3+=str2[k++];
        else if(!end1)
            str3+=str1[j++];
    }while(i++<(str1.length()+str2.length()));

    cout << str3 << "\n\n";
    return 0;
}