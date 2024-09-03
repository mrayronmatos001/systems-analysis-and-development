#include <iostream>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
using namespace std;

int main(int argc, char *argv[]) {

  pid_t pid[10];
  int i;

  int N=atoi(argv[argc-2]);

  for(i=0;i<N;i++)
    pid[i]=fork();
  if(pid[0]!=0&&pid[N-1]!=0)
    pid[N]=fork();
  cout<<"X\n";
  return 0;
}
