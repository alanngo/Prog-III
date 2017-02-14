#include <ctime>
#include <iostream>
#include "Factorial.h"
using namespace std;

// testRun Prototype
int testRun( int );

// Main Function
int main()
{
	// Test 10,000,000 trial runs
	testRun(10000000);

	// Test 100,000,000 trial runs
	testRun(100000000);

	// Test 300,000,000 trial runs
	testRun(300000000);

	// Test 1,000,000,000 trial runs
	testRun(1000000000);

	return 0;
}

// Test Function
int testRun(int num)
{
		clock_t start;
		double duration, duration2;
		int fact,
		    trialRuns = num;

    // We take the factorial of 12 to be our constant as 12! is the highest
		// limit the `int` data type can accept. Any number higher will cause
		// memory overflow issues
		int n = 12;

		// Test Iterative Solution
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
		cout << endl << "Trial Runs: " << trialRuns << endl << endl;
		cout << "ITERATIVE SOLUTION: " << duration << " secs" << endl;
		cout << "RECURSIVE SOLUTION: " << duration2 << " secs" << endl;
		return 0;
}