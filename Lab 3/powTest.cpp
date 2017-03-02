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

  while (!(cont == 'n' || cont == 'N'))
  {
  	cout << "Enter Base: ";
  	if(cin >> num)
  	{ 
  		cout << "Enter Exponent: ";
  		if(cin >> num2)
  		{
  			cout << endl;
  		}
  		else
  		{
  			cout << "Invalid input, please try again" << endl << endl;
  			break;
  		}
  	}
  	else
  	{
  		cout << "Invalid input, please try again" << endl << endl;
  		break;
    }

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
