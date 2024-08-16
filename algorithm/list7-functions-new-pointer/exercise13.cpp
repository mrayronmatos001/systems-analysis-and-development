#include <iostream>
using namespace std;

void mm(int *v, int *min, int *max);

int main() {
    system("clear");
    int v[4]={1,2,4,3}, min, max;
    mm(v, &min, &max);
    cout << "min: " << min << "\nmax: " << max << "\n\n";
    return 0;
}

void mm(int *v, int *min, int *max) {
    int vmax=0, vmin;
    for(int i=0; i<4; i++) {
        if(i==0)
            vmin=v[0];
        if(vmin>v[i])
            vmin=v[i];
        else if(vmax<v[i])
            vmax=v[i];
    }
    *min=vmin;
    *max=vmax;
}