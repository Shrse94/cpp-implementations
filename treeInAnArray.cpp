/*
	Name: treeInAnArray
	Copyright: 2025
	Author: Shariza Aziz
	Date: 31/07/25 20:03
	Description: Takes a given unsorted array, sorts it, and stores elements in a new
				 array called tree. The tree array is used to create a balanced binary search
				 tree, then displays both the sorted array and the tree.
*/

#include <iostream>
#include <algorithm>
using namespace std;

const int SIZE = 8;

// Original Array
int d[SIZE] = {2, 5, 3, 7, 8, 9, 1, 2};

// Array set to 0 by default in order to later store tree elements
int tree[SIZE] = {};

// Tracks current position in tree array
int pos = 0;

const int START = 0, END = SIZE - 1;

// Function Prototypes
void sortArray(int [], int);
void createTree(int [], int, int);
void displayTree(int [], int);
void originalArray(int [], int);

// Built in sort function
void sortArray(int arr[], int size)
{
	sort(arr, arr + size);
}

// Adds middle element, then does the same for left and right sides
void createTree(int arr[], int start, int end)
{
	if(start > end || pos >= SIZE)
		return;
		
	int mid = (start + end) / 2;
	
	// Add middle to tree array
	tree[pos++] = arr[mid];
	
	// recursively creates Left subtree
	createTree(arr, start, mid - 1);
	
	// recursively creates right subtree
	createTree(arr, mid + 1, end);
}

// Prints tree array
void displayTree(int tree[], int size)
{
	cout << "Tree implemented in array form:  ";
	for(int i = 0; i < size; i++)
	{
		cout << tree[i] << " ";
	}
	cout << endl;
}

// Prints the original array in sorted form
void originalArray(int arr[], int size)
{
	cout << "Array before implementing into tree: ";
	for(int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main()
{
	// Function Calls
	sortArray(d, SIZE);
	createTree(d, START, END);
	originalArray(d, SIZE);
	displayTree(tree, SIZE);
	
	return 0;
}