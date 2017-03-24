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
   cout << endl;
}  // end displayList

void listTester(ListInterface<string>* listPtr)
{
   string data[] = {"ten", "ten", "one", "ten", "two", "ten"};
   cout << "isEmpty: returns " << listPtr->isEmpty() << "; should be 1 (true)" << endl;
   for (int i = 0; i < 6; i++)
   {
      if (listPtr->insert(i + 1, data[i]))
         cout << "Inserted " << listPtr->getEntry(i + 1) << " at position " << (i + 1) << endl;
      else
         cout << "Cannot insert " << data[i] << " at position " << (i + 1) << endl;
   }  // end for

   displayList(listPtr);

   cout << "isEmpty: returns " << listPtr->isEmpty() << "; should be 0 (false)" << endl;
   //cout << "getLength returns : " << listPtr->getLength() << "; should be 5" << endl;

   //cout << "The entry at position 4 is " << listPtr->getEntry(4) << "; should be four" << endl;
   //cout << "After replacing the entry at position 3 with XXX: ";
   //listPtr->replace(3, "XXX");
  // displayList(listPtr);

  // cout << "remove(2): returns " << listPtr->remove(2) << "; should be 1 (true)" << endl;
  // cout << "remove(1): returns " << listPtr->remove(1) << "; should be 1 (true)" << endl;
  // cout << "remove(6): returns " << listPtr->remove(6) << "; should be 0 (false)" << endl;
  // displayList(listPtr);

   cout << "getPosition(one): " << listPtr->getPosition("one") << "; should be 3" << endl;
   cout << "getPosition(two): " << listPtr->getPosition("two") << "; should be 5" << endl;

// try illegal getEntry
//   cout << "Attempt an illegal retrieval from position 6: " << endl;
//   listPtr->getEntry(6);

// try illegal
//   cout << "Attempt an illegal replacement at position 6: " << endl;
//   listPtr->replace(6, "YYY");
   cout << "Remove all ones from the list " << endl;
   cout << "remove(ten): returns " << listPtr->remove("ten") << "; should be 4 for 4 entries removed" << endl;
   displayList(listPtr);
   
   cout << "clear: " << endl;
   listPtr->clear();
   cout << "isEmpty: returns " << listPtr->isEmpty() << "; should be 1 (true)" << endl;
   
} // end listTester

int main()
{
	ListInterface<string>* listPtr = new ArrayList<string>();
	cout << "Testing the Array-Based List:" << endl;
	listTester(listPtr);
   return 0;
}  // end main
