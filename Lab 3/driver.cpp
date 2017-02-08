#include <ctime>
#include <iostream>
#include "Factorial.h"
using namespace std;


int main()
{
	clock_t start;
	double duration, duration2;
	int fact,
	    trialRuns = 150000000;

	// Test Iterative Solution
	int n = 12;
	start = clock();

	for (int i = 0; i < trialRuns; i++)
	{
		fact = factorial(n);
	}
	duration = (clock() - double(start)) / CLOCKS_PER_SEC;
	
	// Test Recursive Solution
	start = clock();
	
	for (int i = 0; i < trialRuns; i++)
	{
		fact = recursiveFactorial(n);
	}
	duration2 = (clock() - double(start)) / CLOCKS_PER_SEC;
	
	// Display Timing Results
	cout << "Trial Runs: " << trialRuns << endl;
	cout << "ITERATIVE SOLUTION: " << duration << " secs" << endl;
	cout << "RECURSIVE SOLUTION: " << duration2 << " secs" << endl;
	return 0;
}
