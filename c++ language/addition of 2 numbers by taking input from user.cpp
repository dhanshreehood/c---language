/*
Creating a Simple Calculator:
In this example, the user must input two numbers. Then we print the sum by calculating (adding) the two numbers:

Example-
*/
#include <iostream>
using namespace std;

int main() {
  int x, y;
  int sum;
  cout << "Type a number: ";
  cin >> x;
  cout << "Type another number: ";
  cin >> y;
  sum = x + y;
  cout << "Sum is: " << sum;
  return 0;
}
