#ifndef REVERSE_
#define REVERSE_
#include <iostream>
#include <string>
using namespace std;


void writeBackwards(string sentence, int index)
/* :param sentence: accepts a string
   :param index: the length of sentence
*/ 
{
	if (index < 0)
	{
		cout << endl;
		return;
	}
	
	else
		cout << sentence[index];
		writeBackwards(sentence, index - 1);	
}

void reverse(string sentence)
// :param sentence: accepts a string
{
	for (int i = sentence.length() - 1; i >=0; i--)
	{
		cout << sentence[i];
	}
	cout << endl;
}

#endif
