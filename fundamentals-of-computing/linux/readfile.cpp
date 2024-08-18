#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

int main() {
    FILE *fp;
    char line[100], *reading;
    int vector[17] = {0}, L=1, i=0, j=6;

    fp = fopen("numbers.txt", "r");
    if (fp == nullptr) {
	perror("Error opening file");
	return 1;
    }

    while(!feof(fp)) {
	reading = fgets(line, 100, fp);
	if (reading) {
	    printf("Line %d: %s", L, line);
	    char *token = strtok(line, " ");
	    while(token != NULL && i < 17) {
		vector[i++] = atoi(token);
		token = strtok(NULL, " ");
	    }
	    j += i;
	}
	L++;
    }

    fclose(fp);

    for (i=0; i<17; i++) {
	printf("%d\t", vector[i]);
    }

    return 0;
}
