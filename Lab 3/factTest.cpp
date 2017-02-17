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

	// Test 500 Million trial runs
	testRun(500000000);

	return 0;
}

// Test Function
void testRun(long long int num)
{
	clock_t start;
	double duration, duration2;
	long long int fact,
		      trialRuns = num;

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
