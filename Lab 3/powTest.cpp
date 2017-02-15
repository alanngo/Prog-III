#include <cmath>
#include <iostream>
#include "Functions.h"
using namespace std;

int main()
{
  double num, num2;

  // Lets test 12^4
  num = power(12, 4);
  num2 = pow(12, 4);

  cout << "Testing 12^4" << endl << endl;
  cout << "power() function: " << num << endl;
  cout << "pow()   function: " << num2 << endl << endl;
  cout << "-----------------------" << endl << endl;

  // Let's test 5^2
  num = power(5, 2);
  num2 = pow(5, 2);

  cout << "Testing 5^2" << endl << endl;
  cout << "power() function: " << num << endl;
  cout << "pow()   function: " << num2 << endl << endl;
  cout << "-----------------------" << endl << endl;

  // Let's test 9^3
  num = power(9, 3);
  num2 = pow(9, 3);

  cout << "Testing 9^3" << endl << endl;
  cout << "power() function: " << num << endl;
  cout << "pow()   function: " << num2 << endl << endl;
  cout << "-----------------------" << endl << endl;

  return 0;
}
