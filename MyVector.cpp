// Name: Andrew Garofalo
// Email Address : agarofalo1@gmail.com
// Assignment Number : 3
// Program Description : This program

#include "stdafx.h"
#include "MyArray.h"
#include <iostream>
#include <string>

void runProgram();

int main()
{
	MyArray<int> arr;
	
	MyArray<int> a1;
	cout << "Number of elements in a1= " << a1.length() << endl;
	a1.insertTail(35);
	a1.insertTail(45);
	a1.insertHead(55);
	a1.deleteTail();

	for (int i = 0; i < a1.length(); i++)
		cout << a1[i] << endl;
	runProgram();

	return 0;
}

void runProgram()
{
	bool continueProgram = true;
	int userChoice = 0, userChoice1, userChoice2;
	bool userChoiceBool;
	char userChoiceChar = ' ';
	string userChoiceString = " ";
	float userChoiceFloat = 0;
	double userChoiceDouble = 0;

		cout << "What type of an array would you like to create? \nEnter:\n'1' for bool.\n'2' for char.\n'3' for double.\n'4' for float.\n"
			<< "'5' for int.\n'6' for string." << endl;
		cin >> userChoice;

		switch (userChoice)
		{
		case 1:
		{
			MyArray<bool> a2;
			while (continueProgram == true)
			{
				cout << "Enter:\n'1' to get the length of the array.\n'2' to insert a new element at the head of the array.\n"
					<< "'3' insert a new element at the tail of the array.\n'4' to delete the first element.\n'5' to delete the last element in the array.\n"
					<< "'6' to sort the elements in ascending order.\n'7' to sort the elements in descending order.\n'8' to print all the elements in the array.\n'9' to display the maximum value.\n"
					<< "'10' to display the minimum value in the array.\n'11' to quit the program." << endl;
				cin >> userChoice1;
				switch (userChoice1)
				{
				case 1:
					cout << "The length of the array is " << a2.length() << "." << endl;
					break;
				case 2:
					cout << "What would you like to insert into the beginning of the array?" << endl;
					cin >> userChoiceBool;

					a2.insertHead(userChoiceBool);
					break;
				case 3:
					cout << "What would you like to insert into the end of the array?" << endl;
					cin >> userChoiceBool;

					a2.insertTail(userChoiceBool);
					break;
				case 4:
					a2.deleteHead();
					break;
				case 5:
					a2.deleteTail();
					break;
				case 6:
					a2.sortAscending();
					break;
				case 7:
					a2.sortDescending();
					break;
				case 8:
					cout << "The elements in the array are: ";
					for (int i = 0; i < a2.length(); i++)
					{
						cout << a2[i] << " ";
					}
					cout << endl;
					break;
				case 9:
					cout << "The maximum value in the array is " << a2.getMin() << "." << endl;
					break;
				case 10:
					cout << "The minimum value in the array is " << a2.getMin() << "." << endl;
					break;
				case 11:
					continueProgram = false;
					break;
				}
			}
			}
			break;
		case 2:
		{
			MyArray<char> a2;
			while (continueProgram == true)
			{
				cout << "Enter:\n'1' to get the length of the array.\n'2' to insert a new element at the head of the array.\n"
					<< "'3' insert a new element at the tail of the array.\n'4' to delete the first element.\n'5' to delete the last element in the array.\n"
					<< "'6' to sort the elements in ascending order.\n'7' to sort the elements in descending order.\n'8' to print all the elements in the array.\n'9' to display the maximum value.\n"
					<< "'10' to display the minimum value in the array.\n'11' to quit the program." << endl;
				cin >> userChoice1;
				switch (userChoice1)
				{
				case 1:
					cout << "The length of the array is " << a2.length() << "." << endl;
					break;
				case 2:
					cout << "What would you like to insert into the beginning of the array?" << endl;
					cin >> userChoiceChar;

					a2.insertHead(userChoiceChar);
					break;
				case 3:
					cout << "What would you like to insert into the end of the array?" << endl;
					cin >> userChoiceChar;

					a2.insertTail(userChoiceChar);
					break;
				case 4:
					a2.deleteHead();
					break;
				case 5:
					a2.deleteTail();
					break;
				case 6:
					a2.sortAscending();
					break;
				case 7:
					a2.sortDescending();
					break;
				case 8:
					cout << "The elements in the array are: ";
					for (int i = 0; i < a2.length(); i++)
					{
						cout << a2[i] << " ";
					}
					cout << endl;
					break;
				case 9:
					cout << "The maximum value in the array is " << a2.getMin() << "." << endl;
					break;
				case 10:
					cout << "The minimum value in the array is " << a2.getMin() << "." << endl;
					break;
				case 11:
					continueProgram = false;
					break;
				}
			}
		}
		break;
		case 3:

		{
			MyArray<double> a2;
			while (continueProgram == true)
			{
				cout << "Enter:\n'1' to get the length of the array.\n'2' to insert a new element at the head of the array.\n"
					<< "'3' insert a new element at the tail of the array.\n'4' to delete the first element.\n'5' to delete the last element in the array.\n"
					<< "'6' to sort the elements in ascending order.\n'7' to sort the elements in descending order.\n'8' to print all the elements in the array.\n'9' to display the maximum value.\n"
					<< "'10' to display the minimum value in the array.\n'11' to quit the program." << endl;
				cin >> userChoice1;
				switch (userChoice1)
				{
				case 1:
					cout << "The length of the array is " << a2.length() << "." << endl;
					break;
				case 2:
					cout << "What would you like to insert into the beginning of the array?" << endl;
					cin >> userChoiceDouble;

					a2.insertHead(userChoiceDouble);
					break;
				case 3:
					cout << "What would you like to insert into the end of the array?" << endl;
					cin >> userChoiceDouble;

					a2.insertTail(userChoiceDouble);
					break;
				case 4:
					a2.deleteHead();
					break;
				case 5:
					a2.deleteTail();
					break;
				case 6:
					a2.sortAscending();
					break;
				case 7:
					a2.sortDescending();
					break;
				case 8:
					cout << "The elements in the array are: ";
					for (int i = 0; i < a2.length(); i++)
					{
						cout << a2[i] << " ";
					}
					cout << endl;
					break;
				case 9:
					cout << "The maximum value in the array is " << a2.getMin() << "." << endl;
					break;
				case 10:
					cout << "The minimum value in the array is " << a2.getMin() << "." << endl;
					break;
				case 11:
					continueProgram = false;
					break;
				}
			}
		}
		break;
		case 4:
		{
			MyArray<float> a2;
			while (continueProgram == true)
			{
				cout << "Enter:\n'1' to get the length of the array.\n'2' to insert a new element at the head of the array.\n"
					<< "'3' insert a new element at the tail of the array.\n'4' to delete the first element.\n'5' to delete the last element in the array.\n"
					<< "'6' to sort the elements in ascending order.\n'7' to sort the elements in descending order.\n'8' to print all the elements in the array.\n'9' to display the maximum value.\n"
					<< "'10' to display the minimum value in the array.\n'11' to quit the program." << endl;
				cin >> userChoice1;
				switch (userChoice1)
				{
				case 1:
					cout << "The length of the array is " << a2.length() << "." << endl;
					break;
				case 2:
					cout << "What would you like to insert into the beginning of the array?" << endl;
					cin >> userChoiceFloat;

					a2.insertHead(userChoiceFloat);
					break;
				case 3:
					cout << "What would you like to insert into the end of the array?" << endl;
					cin >> userChoiceFloat;

					a2.insertTail(userChoiceFloat);
					break;
				case 4:
					a2.deleteHead();
					break;
				case 5:
					a2.deleteTail();
					break;
				case 6:
					a2.sortAscending();
					break;
				case 7:
					a2.sortDescending();
					break;
				case 8:
					cout << "The elements in the array are: ";
					for (int i = 0; i < a2.length(); i++)
					{
						cout << a2[i] << " ";
					}
					cout << endl;
					break;
				case 9:
					cout << "The maximum value in the array is " << a2.getMin() << "." << endl;
					break;
				case 10:
					cout << "The minimum value in the array is " << a2.getMin() << "." << endl;
					break;
				case 11:
					continueProgram = false;
					break;
				}
			}
		}
		break;
		case 5:
		{
			MyArray<int> a2;
			while (continueProgram == true)
			{
				cout << "Enter:\n'1' to get the length of the array.\n'2' to insert a new element at the head of the array.\n"
					<< "'3' insert a new element at the tail of the array.\n'4' to delete the first element.\n'5' to delete the last element in the array.\n"
					<< "'6' to sort the elements in ascending order.\n'7' to sort the elements in descending order.\n'8' to print all the elements in the array.\n'9' to display the maximum value.\n"
					<< "'10' to display the minimum value in the array.\n'11' to quit the program." << endl;
				cin >> userChoice1;
				switch (userChoice1)
				{
				case 1:
					cout << "The length of the array is " << a2.length() << "." << endl;
					break;
				case 2:
					cout << "What would you like to insert into the beginning of the array?" << endl;
					cin >> userChoice2;

					a2.insertHead(userChoice2);
					break;
				case 3:
					cout << "What would you like to insert into the end of the array?" << endl;
					cin >> userChoice2;

					a2.insertTail(userChoice2);
					break;
				case 4:
					a2.deleteHead();
					break;
				case 5:
					a2.deleteTail();
					break;
				case 6:
					a2.sortAscending();
					break;
				case 7:
					a2.sortDescending();
					break;
				case 8:
					cout << "The elements in the array are: ";
					for (int i = 0; i < a2.length(); i++)
					{
						cout << a2[i] << " ";
					}
					cout << endl;
					break;
				case 9:
					cout << "The maximum value in the array is " << a2.getMin() << "." << endl;
					break;
				case 10:
					cout << "The minimum value in the array is " << a2.getMin() << "." << endl;
					break;
				case 11:
					continueProgram = false;
					break;
				}
			}
		}
		break;
		case 6:
		{
			MyArray<string> a2;
			while (continueProgram == true)
			{
				cout << "Enter:\n'1' to get the length of the array.\n'2' to insert a new element at the head of the array.\n"
					<< "'3' insert a new element at the tail of the array.\n'4' to delete the first element.\n'5' to delete the last element in the array.\n"
					<< "'6' to sort the elements in ascending order.\n'7' to sort the elements in descending order.\n'8' to print all the elements in the array.\n'9' to display the maximum value.\n"
					<< "'10' to display the minimum value in the array.\n'11' to quit the program." << endl;
				cin >> userChoice1;
				switch (userChoice1)
				{
				case 1:
					cout << "The length of the array is " << a2.length() << "." << endl;
					break;
				case 2:
					cout << "What would you like to insert into the beginning of the array?" << endl;
					cin >> userChoiceString;

					a2.insertHead(userChoiceString);
					break;
				case 3:
					cout << "What would you like to insert into the end of the array?" << endl;
					cin >> userChoiceString;

					a2.insertTail(userChoiceString);
					break;
				case 4:
					a2.deleteHead();
					break;
				case 5:
					a2.deleteTail();
					break;
				case 6:
					a2.sortAscending();
					break;
				case 7:
					a2.sortDescending();
					break;
				case 8:
					cout << "The elements in the array are: ";
					for (int i = 0; i < a2.length(); i++)
					{
						cout << a2[i] << " ";
					}
					cout << endl;
					break;
				case 9:
					cout << "The maximum value in the array is " << a2.getMin() << "." << endl;
					break;
				case 10:
					cout << "The minimum value in the array is " << a2.getMin() << "." << endl;
					break;
				case 11:
					continueProgram = false;
					break;
				}
			}
		}
		break;
		}
}