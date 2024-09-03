#include <iostream>
#include <unistd.h>
#include <sys/wait.h>
using namespace std;

int main() {
  int x=0;
  fork(); //create process 1 and process 2
  x++;
  sleep(5); //both wait 5 seconds
  cout << "+5s \n";
  wait(0); // process 1 wait process 2 finish
  fork(); // process 2 create process 3
  wait(0); // process 2 wait process 3 finish
  sleep(5); // process 3 wait 5 seconds
  cout << "+5s \n";
  x++;
  // after 10 seconds process 3 write, after 15 seconds process 2 write,  after 20 seconds process 4 write, after 25 seconds process 1 write
  cout << "Value of x: " << x << "\n\n"; 
}
