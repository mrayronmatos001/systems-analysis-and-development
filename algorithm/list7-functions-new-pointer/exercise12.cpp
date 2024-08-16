#include <iostream>
using namespace std;

void hm(int minuts, int *h, int *m);

int main() {
  system("clear");
  int minuts, h, m;
  
  cout << "informe a quantidade de tempo em minutos: ";
  cin >> minuts;
  hm(minuts, &h, &m);
  cout << h << "h" << m << "\n\n";
  return 0;
}

void hm(int minuts, int *h, int *m) {
  *h = minuts/60;
  *m = minuts%60;
}