#include <cmath>
#include <iostream>
#include "Functions.h"
using namespace std;

int main()
{

  double num,
         answer,
         answer2;

  int num2;
  char cont = 'y';

  while (!(cont == 'n'))
  {
  	cout << "Enter Base: ";
  	cin >> num;
  	cout << "Enter Exponent: ";
  	cin >> num2;
  	cout << endl;

  	answer = power(num, num2);
  	answer2 = pow(num, num2);

  	cout << "Testing " << num << "^" << num2 << endl << endl;
  	cout << "power() function: " << answer << endl;
  	cout << "pow()   function: " << answer2 << endl << endl;
  	cout << "-----------------------" << endl << endl;

  	cout << "Continue with another test (y/n): ";
  	cin >> cont;
  	cout << endl << endl;
  }

  return 0;
}
