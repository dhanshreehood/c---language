/*
Constants
When you do not want others (or yourself) to override existing variable values, 
use the const keyword (this will declare the variable as "constant", which means unchangeable and read-only):
*/

#include <iostream>
using namespace std;

int main() {
  const int myNum = 15;
  myNum = 10; //In function 'int main()': , 6.9: error: assignment of read-only variable 'myNum'
  cout << myNum;
  return 0;
}
