#include <ctime>
#include <iostream>
#include "Functions.h"
using namespace std;

// testRun Prototype
void testRun( long long int );

// Main Function
int main()
{
	// Test 10 Million trial runs
	testRun(10000000);

	// Test 100 Million trial runs
	testRun(100000000);

	// Test 300 Million trial runs
	testRun(300000000);

	// Test 1 Billion trial runs
	testRun(1000000000);

	return 0;
}

// Test Function
void testRun(long long int num)
{
	clock_t start;
	double duration, duration2;
	long long int fact,
		      trialRuns = num;

  /* Base Case: 12! - iterative solution clearly more efficient

		 Middle Case: 18! - both solutions begin to preform relatively equal
		                    there is less descrepancy between the times

		 Final Case: 20! - highest factorial test before encountering memory overflow
		                   issues. at trial runs <= 100 Million both solutions have
											 little time descrepancy. at > 300 Million the recursive
											 solution performs more efficient.
	*/
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
	cout << "-----------------------------------" << endl << endl;
}
