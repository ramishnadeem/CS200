#include <iostream>
#include <string>
using namespace std;

#include "DynamicArray.hpp"

int GetValidInput(int min, int max)
{
	int choice;
	cout << ">> ";
	cin >> choice;
	while (choice < min || choice > max)
	{
		cout << "Invalid input. Try again." << endl;
		cout << ">> ";
		cin >> choice;
	}
	return choice;
}

int GetArraySize()
{
	int arraySize;
	cout << "How big should the array be? (1-10): ";
	arraySize = GetValidInput(1, 10);
	return arraySize;
}

int MainMenu()
{
	cout << " Options " << endl
		<< " 1. Change Existing Item " << endl
		<< " 2. Finish " << endl;
	int choice;
	choice = GetValidInput(1, 2);
	return choice;
}

void InitializeArray(DynamicArray& arr)
{
	for (int i = 0; i < arr.GetSize(); i++)
	{
		string NewValue;
		cout << "New Value?: ";
		cin >> NewValue;
		arr.Set(i, NewValue);
	}

}

void GetNewArrayValue(DynamicArray& arr)
{
	int index;
	string newValue;
	cout << "Which Index?: ";
	cin >> index;
	cout << "New Value?: ";
	cin >> newValue;
	arr.Set(index, newValue);
}

int main()
{
	int arraySize = GetArraySize();

	DynamicArray arr(arraySize);

	InitializeArray(arr);

	while (true)
	{
		arr.Display();

		int choice = MainMenu();

		if (choice == 1)
		{
			GetNewArrayValue(arr);
		}
		else if (choice == 2)
		{
			break;
		}
	}

	return 0;
}