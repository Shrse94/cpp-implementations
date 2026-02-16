/*
	Name: recursionPrintDescending
	Copyright: 2026
	Author: Shariza Aziz
	Date: 16/02/26 13:28
	Description: Prints numbers from N to 1 using recursion
*/

#include <iostream>
using namespace std;

// Global variable
const int N = 6;

// Function Prototype
void printDescending(const int N);

void printDescending(const int N)
{
	// Base case
	if(N <= 0)
	   return;
	else
	{
		cout << N << " ";
		
		// Recursive call 
		printDescending(N - 1);
	}
}

int main()
{
	printDescending(N);
	
	return 0;
}
