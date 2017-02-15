#ifndef FUNCTIONS
#define FUNCTIONS_

// Iterative Factorial Function
// Written by: Alex B
long long int factorial(int num)
{
	long long int product = 1;
	for (int i = 1; i <= num; i++)
	{
		product *= i;
	}
	return product;
}

// Recursive Factorial Function
// Written by: Alan N
long long int recursiveFactorial(int x)
{
	if (x == 0)
		return 1;

	else
		return x * recursiveFactorial(x - 1);
}

// Recursive Power Function
// Written by: Alex B
double power( double a, int n)
{
	if (n == 0)
		return 1;

	else if (n > 0)
		return a *= power(a, n-1);
}


#endif