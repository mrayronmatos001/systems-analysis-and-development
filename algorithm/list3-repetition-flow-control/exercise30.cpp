#include <iostream>
#include <utility>
using namespace std;

int main() {
    system("clear");
    int a, b, c, d, e;
    
    cout << "informe 5 numeros: \n\n";
    cin >> a >> b >> c >> d >> e;

    bool swaper;
    do {
        swaper = false;
        if (a > b) { swap(a, b); swaper = true; }
        if (b > c) { swap(b, c); swaper = true; }
        if (c > d) { swap(c, d); swaper = true; }
        if (d > e) { swap(d, e); swaper = true; }
    } while (swaper);

    int median = c;

    int oftenA = (a == b) + (a == c) + (a == d) + (a == e) + 1;
    int oftenB = (b == c) + (b == d) + (b == e) + 1;
    int oftenC = (c == d) + (c == e) + 1;
    int oftenD = (d == e) + 1;
    int oftenE = 1;

    int maxoften = oftenA;
    int mode = a;

    if (oftenB > maxoften) { maxoften = oftenB; mode = b; }
    if (oftenC > maxoften) { maxoften = oftenC; mode = c; }
    if (oftenD > maxoften) { maxoften = oftenD; mode = d; }
    if (oftenE > maxoften) { maxoften = oftenE; mode = e; }

    cout << "median: " << median << endl;
    cout << "mode: " << mode << endl;

    return 0;
}