#include <iostream>
#include <string>
#include "LinkedList.h" // ADT list operations
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

void copyConstructorTester()
{
   LinkedList<string> list;
   string items[] = {"zero", "one", "two", "three", "four", "five"};
   for (int i = 0; i < 6; i++)
   {
      cout << "Adding " << items[i] << endl;
      bool success = list.insert(1, items[i]);
      if (!success)
         cout << "Failed to add " << items[i] << " to the list." << endl;
   }
   displayList(&list);
   
   LinkedList<string> copyOfList(list);
   cout << "Copy of list: ";
   displayList(&copyOfList);
   
   cout << "The copied list: ";
   displayList(&list);
}  // end copyConstructorTester

void listTester(ListInterface<string>* listPtr)
{
   string data[] = {"two", "two", "two", "four", "two", "six"};
   cout << "isEmpty: returns " << listPtr->isEmpty() << "; should be 1 (true)" << endl;
   for (int i = 0; i < 6; i++)
   {
      if (listPtr->insert(i + 1, data[i]))
      {
         cout << "Inserted " << listPtr->getEntry(i + 1) << " at position " << (i + 1) << endl;
      }
      else
         cout << "Cannot insert " << data[i] << " at position " << (i + 1) << endl;
   }  // end for
   
   displayList(listPtr);
   
   cout << "isEmpty: returns " << listPtr->isEmpty() << "; should be 0 (false)" << endl;
   cout << "getLength returns : " << listPtr->getLength() << "; should be 5" << endl;
   
   cout << "The entry at position 4 is " << listPtr->getEntry(4) << "; should be four" << endl;
   
   cout << "Find the position of the entry six: " << listPtr->getPosition("six") << "; should be 6" << endl; 
   cout << "Remove the entry 'two' from all positions, should return 4: " << listPtr->remove("two") << endl;
   displayList(listPtr);
   //cout << "After replacing the entry at position 3 with XXX: ";
   //listPtr->replace(3, "XXX");
   //displayList(listPtr);
   
   //cout << "What is the position of the entry 'XXX' ";
   //cout << "the position is " << listPtr ->getPosition("XXX") << " should be 3" << endl;
   //cout << "remove(2): returns " << listPtr->remove(2) << "; should be 1 (true)" << endl;
   //cout << "remove(1): returns " << listPtr->remove(1) << "; should be 1 (true)" << endl;
   //cout << "remove(6): returns " << listPtr->remove(6) << "; should be 0 (false)" << endl;
   //displayList(listPtr);
   
  //cout << "clear: " << endl;
   //listPtr->clear();
   //cout << "isEmpty: returns " << listPtr->isEmpty() << "; should be 1 (true)" << endl;
   
   //std::cout << "Attempt an illegal retrieval from position 6: " << std::endl;
   //listPtr->getEntry(6);
   
   //std::cout << "Attempt an illegal replacement at position 6: " << std::endl;
   //listPtr->replace(6, "YYY"); 
   
} // end listTester

int main()
{
   ListInterface<string>* listPtr = new LinkedList<string>();
   listTester(listPtr);
   //copyConstructorTester();
   return 0;
}  // end main

