#pragma once

#include <iostream>
using namespace std;

template <class Item>

class MyArray
{
private: 
	Item* myArray;
	int size = 0;
	int used = 0;

public:
	//default constructor
	MyArray();
	//destructor
	~MyArray();
	//inserts an element of type Item to the front of the array.
	void insertHead(Item);
	//inserts an Item to the end of the array
	void insertTail(Item);
	//deletes the first element of the array
	void deleteHead();
	//deletes the last element in the array
	void deleteTail();
	//sorts array in ascending order
	void sortAscending();
	//sorts array in descending order
	void sortDescending();
	//get the maximum element in the array
	Item getMax();
	//get the minimum element in the array
	Item getMin();
	//get the length of the array
	int length() const;
	//allows accessing the index of the array using the [] operator
	Item operator[](int index);
};

template <class Item>
//default constructor of MyArray
MyArray<Item>::MyArray()
{
	size = 5;
	used = 0;
	myArray = new Item[size];
}

template <class Item>
//destructor for MyArray
MyArray<Item>::~MyArray()
{
	//delete the dynamically allocated array.
	delete[] myArray;
}

template <class Item>
// insert element to beginning of the array
void MyArray<Item>::insertHead(Item num)
{
	//if no elements are in the array, put the item in index 0
	if (used == 0)
	{
		myArray[0] = num;
	}
	//if the array is full, double the size of the array, and insert the item at the front of the new array.
	else if(used == size)
	{
		//temp array twice the size of the old array
		Item* tempArr = new Item[used * 2];

		// copy elements to the temp array
		for (int i = 0; i < used; i++)
		{
			tempArr[i] = myArray[i];
		}

		//create new array to put elements into, leaving the first index empty.
		Item* myArrayNew = new Item[used * 2];

		//link myArray to the new array with double the size.
		myArray = myArrayNew;

		// copy elements to new array
		for (int i = 0; i < used; i++)
		{
			myArray[i+1] = tempArr[i];
		}

		delete[] tempArr;

		//update the size variable to reflect new array capacity
		size = used * 2;

		//insert the new item in the front of the array
		myArray[0] = num;
	}
	//else shift the elements of the array, and insert new item into first index
	else
	{
		for (int i = used; i > 0; i--)
		{
			myArray[i] = myArray[i - 1];
		}

		myArray[0] = num;
	}

	//increment used variable
	++used;
}

template<class Item>
//insert new item at end of the array, doubling the size of the array if it is full.
void MyArray<Item>::insertTail(Item num)
{
	if (used == size)
	{
		Item* tempArr = new Item[used * 2];

		for (int i = 0; i < used; i++)
		{
			tempArr[i] = myArray[i];
		}

		Item* myArrayNew = new Item[used * 2];

		myArray = myArrayNew;

		for (int i = 0; i < used; i++)
		{
			myArray[i] = tempArr[i];
		}

		delete[] tempArr;

		size = used * 2;

		myArray[used] = num;
	}
	else
	{
			myArray[used] = num;
	}

	++used;
}

template<class Item>
//delete the first element of the array
void MyArray<Item>::deleteHead()
{
	for (int i = 1; i < used; i++)
	{
		myArray[i - 1] = myArray[i];
	}

	--used;
}

template<class Item>
//delete the last element of the array
void MyArray<Item>::deleteTail()
{
	--used;
}

template<class Item>
//sort array in ascending order
void MyArray<Item>::sortAscending()
{
	bool swapMade = true;

	while (swapMade == true)
	{
		swapMade = false;

		for (int i = 0; i < (used - 1); i++)
		{
			if (myArray[i] > myArray[i + 1])
			{
				swap(myArray[i], myArray[i + 1]);

				swapMade = true;
			}
		}
	}
}

template<class Item>
//sort array in descending order
void MyArray<Item>::sortDescending()
{
	bool swapMade = true;

	while (swapMade == true)
	{
		swapMade = false;

		for (int i = 0; i < (used - 1); i++)
		{
			if (myArray[i] < myArray[i + 1])
			{
				swap(myArray[i], myArray[i + 1]);

				swapMade = true;
			}
		}
	}
}

template<class Item>
//get the maximum item in the array
Item MyArray<Item>::getMax()
{
	Item max = myArray[0];

	for (int i = 1; i < used; i++)
	{
		if (myArray[i] > max)
		{
			max = myArray[i];
		}
	}

	return max;
}

template<class Item>
//get the minimum item in the array
Item MyArray<Item>::getMin()
{
	Item min = myArray[0];

	for (int i = 1; i < used; i++)
	{
		if (myArray[i] < min)
		{
			min = myArray[i];
		}
	}

	return min;
}

template <class Item>
// get the length of the array
int MyArray<Item>::length() const
{
	return used;
}

template <class Item>
// allow accessing of array elements using [] operator
Item MyArray<Item>::operator[](int index) 
{
	if (index >= -1 && index < used)
	{
		return myArray[index];
	}
	else if (index >= -1 && index < (size - 1))
	{
		cerr << "Subscript uninitialized." << endl;
	}
	else
	{
		cerr << "Subscript out of range." << endl;
	}
}