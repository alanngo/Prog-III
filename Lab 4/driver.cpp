#include <iostream>
#include <string>
#include "ArrayStack.h"
using namespace std;

// Checks for valid operator
bool isOperator(char);

// Check for valid numeric digit
bool isDigit(char);

// Calculate Expression
int performCalculation(int, int, char);


int main()
{
  ArrayStack<int> stack;
  string postfix;
  int num, op1, op2;
  bool error;

  cout << "Enter Postfix Expression: " << endl;
  getline(cin, postfix);

  for (int i = 0; i < postfix.length(); i++)
  {
    if (postfix[i] == ' ')
      continue;
	
    else if (isDigit(postfix[i]))
    {
      num = (postfix[i] - 48);
      stack.push(num);
    }
	
	else if (!(isOperator(postfix[i])))
	{
		cout << postfix[i] << " is an invalid expression" << endl;
		error = true;
	}
	
	
    else if (isOperator(postfix[i]))
    {
      op1 = stack.peek();
      stack.pop();
      op2 = stack.peek();
      stack.pop();

      stack.push(performCalculation(op1, op2, postfix[i]));
    }
	
  }
  
  if (!error)
  	cout << "Value: " << stack.peek() << endl;
  
  return 0;
}


bool isOperator(char ch)
{
  if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
    return true;

  else
    return false;
}


bool isDigit(char ch)
{
  if (ch >= '0' && ch <= '9')
    return true;
  
  else
    return false;
}


int performCalculation(int num1, int num2, char op)
{
  int answer;

  switch(op)
  {
    case '+':
      answer = num2 + num1;
      break;
    case '-':
      answer = num2 - num1;
      break;
    case '*':
      answer = num2 * num1;
      break;
    case '/':
      answer = num2 / num1;
      break;
  }
  
  return answer;
}
