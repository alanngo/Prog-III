#include "ArrayList.h" // ADT list operations
#include <iostream>
#include <string>
using namespace std;

void displayList(ListInterface<string>* listPtr)
{
   cout << "The list contains " << endl;
   for (int pos = 1; pos <= listPtr->getLength(); pos++)
   {
         cout << listPtr->getEntry(pos) << " ";
   } // end for
   cout << endl << endl;
}  // end displayList

void listTester(ListInterface<string>* listPtr)
{
   string data[] = {"duck", "duck", "eagle", "duck", "falcon", "goose"};
   cout << "isEmpty: returns " << listPtr->isEmpty() << "; should be 1 (true)" << endl;
   for (int i = 0; i < 6; i++)
   {
      if (listPtr->insert(i + 1, data[i]))
         cout << "Inserted " << listPtr->getEntry(i + 1) << " at position " << (i + 1) << endl;
      else
         cout << "Cannot insert " << data[i] << " at position " << (i + 1) << endl;
   }  // end for
   cout << endl;
   displayList(listPtr);
   
   cout << "---------------------------" << endl << endl;
   cout << "getPosition('falcon'): " << listPtr->getPosition("falcon") << "; should be 5" << endl;
   cout << "getPosition('eagle'): " << listPtr->getPosition("eagle") << "; should be 3" << endl << endl;


   cout << "Remove every 'duck' from the list " << endl;
   cout << "remove('duck'): returns " << listPtr->remove("duck") << "; should be 3 for 3 entries removed" << endl << endl;
   displayList(listPtr);
   
   cout << "clear: " << endl;
   listPtr->clear();
   cout << "isEmpty: returns " << listPtr->isEmpty() << "; should be 1 (true)" << endl;
   
} // end listTester

int main()
{
	ListInterface<string>* listPtr = new ArrayList<string>();
	cout << "Testing the Array-Based List:" << endl;
	cout << "------------------------------" << endl;
	listTester(listPtr);
   return 0;
}  // end main
