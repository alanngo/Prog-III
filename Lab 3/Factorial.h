#ifndef FACTORIAL_
#define FACTORIAL_

int factorial(int num)
{
	int product = 1;
	for (int i = 1; i <= num; i++)
	{
		product *= i;
	}
	return product;
}

#endif
