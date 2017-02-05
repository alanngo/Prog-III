#include <ctime>
#include "Reverse.h"


int main()
{
	string phrase = "Testing, Testing, Testing!";
	int length = phrase.length();
	clock_t start;
	double duration, duration2;
	int trialRuns = 10000;
	
	// Test Iterative Solution
	start = clock();
	for (int i = 0; i < trialRuns; i++)
	{
		reverse(phrase);
	}
	duration = (clock() - double(start)) / CLOCKS_PER_SEC;
	
	// Test Recursive Solution	
	start = clock();
	for (int i = 0; i < trialRuns; i++)
	{
		writeBackwards(phrase, length-1);
	}
	duration2 = (clock() - double(start)) / CLOCKS_PER_SEC;
	cout << endl << endl;
	
	// Display Timing Results
	cout << "Trial Runs: " << trialRuns << endl << endl;
	cout << "ITERATIVE SOLUTION: " << duration << " secs" << endl;
	cout << "RECURSIVE SOLUTION: " << duration2 << " secs" << endl;

	
	return 0;
}
