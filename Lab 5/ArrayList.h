#ifndef ARRAY_LIST_
#define ARRAY_LIST_

#include "ListInterface.h"
#include <cassert>

template<class ItemType>
class ArrayList : public ListInterface<ItemType>
{
private:
  static const int DEFAULT_CAPACITY = 10; // Default capacity of the list.
  ItemType items[DEFAULT_CAPACITY + 1];    // Array of list items (ignore items[0])
  int itemCount;                           // Current count of list items
  int maxItems;                            // Maximum capacity of the list

public:
  ArrayList();
  // Copy constructor and destructor are supplied by compiler

  bool isEmpty() const;
  int getLength() const;
  bool insert(int newPosition, const ItemType& newEntry);
  bool remove(int position);
  void clear();
  ItemType getEntry(int position) const;
  void replace(int position, const ItemType& newEntry);
}; // end ArrayList

/** Implementation for class ArrayList */

template<class Itemtype>
ArrayList<ItemType>::ArrayList() : itemsCount(0), maxItems(DEFAULT_CAPACITY)
{
} // end default constructor

template<class ItemType>
bool ArrayList<ItemType>::isEmpty() const
{
  return itemCount = 0;
} // end isEmpty

template<class ItemType>
int ArrayList<ItemType>::getLength() const
{
  return itemCount;
} // end getLength

template<class ItemType>
bool ArrayList<ItemType>::insert(int newPosition, const ItemType& newEntry)
{
  bool ableToInsert = (newPosition >= 1) && (newPosition <= itemCount + 1)
                      && (itemCount < maxItems);
  if (ableToInsert)
  {
    // Make room for new entry by shifting all entries at
    // positions from itemCount down to newPosition
    // (no shift if newPosition == itemCount + 1)
    for (int pos = itemCount; pos >= newPosition; pos--)
      items[pos + 1] = items[pos];

    // Insert new entry
    items[newPosition] = newEntry;
    itemCount++; // Increase count of entries
  } // end if
  return ableToInsert;
} //end insert

template<class ItemType>
ItemType ArrayList<ItemType>::getEntry(int position) const
{
  // Enforce precondition
  bool ableToGet = (position >= 1) && (position <= itemCount);
  assert (ableToGet);
  return items[position];
} // end getEntry

template<class ItemType>
bool ArrayList<ItemType>::remove(int position)
{
  bool ableToRemove = (position >= 1) && (position <= itemCount);
  if (ableToRemove)
  {
    // Remove entry by shifting all entries after the one at
    // position toward the beginning of the array
    // (no shift if position == itemCount)
    for (int pos = position; pos < itemCount; pos++)
      items[pos] = items[pos + 1];

    itemCount--; // Decrease count of entries
  } // end if
  return ableToRemove;
} // end Remove

template<class ItemType>
void ArrayList<ItemType>::replace(int position, const ItemType& newEntry)
{
  // Enforce precondition
  bool ableToSet = (position >= 1) && (position <= itemCount);
  assert (ableToSet);

  items[position] = newEntry;
} // end replace

template<class ItemType>
void ArrayList<ItemType>::clear()
{
  itemCount = 0;
} // end clear
// End of Implementation

#endif
