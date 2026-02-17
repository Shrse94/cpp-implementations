/*
	Name: Array_Allocator
	Copyright: 2026
	Author: Shariza Aziz
	Date: 16/02/26 14:48
	Description: This program creates a dynamically allocated array based on user-defined size, 
				 takes input to fill the array, displays the elements, and frees up the memory.
*/

#include <iostream>
using namespace std;

// Function Prototype
int* allocatedArray(int);

// Returns allocatedArray of type pointer of int
int* allocatedArray(int size)
{
	// Allocate memory for the size of arr
	int* arr = new int[size];
	
	for(int i = 0; i < size; i++)
	{
		cout << "Enter an element: \n";
		cin >> arr[i];
	}
	
	return arr;
}

int main()
{
	int size;
	
	cout << "Enter the size of array: \n";
	cin >> size;
	
	// Dynamically allocate an array and fill it with the values from the function call. 
	int* finalArr = allocatedArray(size);
	
	cout << "Output: ";
	for(int i = 0; i < size; i++)
	{
		cout << finalArr[i] << " ";
	}
	
	// Free up memory to prevent memory leaks
	delete[] finalArr;
	
	// set the address of finalArr to nullptr, to prevent dangling pointers
	finalArr = nullptr;
	
	return 0;
}
