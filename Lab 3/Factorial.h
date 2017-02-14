#ifndef FACTORIAL_
#define FACTORIAL_

// Iterative Factorial Function
// Written by: Alex B
int factorial(int num)
{
	int product = 1;
	for (int i = 1; i <= num; i++)
	{
		product *= i;
	}
	return product;
}

// Recursive Factorial Function
// Written by: Alan N
int recursiveFactorial(int x)
{
	if (x == 0)
		return 1;

	else
		return x * recursiveFactorial(x - 1);
}

#endif
