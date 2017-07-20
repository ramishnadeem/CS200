#include "DynamicArray.hpp"

DynamicArray::DynamicArray(int size)
{
	cout << "DynamicArray constructor" << endl;
	// TODO: Initialize dynamic array
	m_size = size;
	m_arr = new string[size];
}

DynamicArray::~DynamicArray()
{
	cout << "DynamicArray destructor" << endl;
	// TODO: Free dynamic array
	if (m_arr != nullptr)
	{
		delete [] m_arr;
	}
}

void DynamicArray::Set(int index, string value)
{
	// Set item at position *index* to the value *value*.
	if (index < 0 || index >= m_size)
	{
		return;
	}

	value = m_arr[index];

}

string DynamicArray::Get(int index)
{
	// Return the item at position *index*
	if (index < 0 || index >= m_size)
	{
		return "";
	}

	if (index > 0 || index <= m_size)
	{
		return m_arr[index];
	}
	
}

int DynamicArray::GetSize()
{
	// Return the size of the array
	return m_size;
}

void DynamicArray::Display()
{
	// Display all elements of the array
	for (int i = 0; i < m_size; i++)
	{
		cout << i << ". " << m_arr[i] << endl;
	}
}