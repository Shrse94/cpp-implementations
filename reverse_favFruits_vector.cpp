/*
	Name: reverse_favFruits_vector
	Copyright: 2025
	Author: Shariza Aziz
	Date: 29/06/25 19:34
	Prompt:
	Ask the user to enter the names of 3 favorite fruits.
	Store the names in a vector<string>, then display them in reverse order.
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<string> favFruits;
	cout << "Enter 3 of your favorite fruits: \n";
	for(int i = 0; i < 3; i++)
	{
		string fruit;
		cout << "Fruit " << i + 1 << ": ";
		cin >> fruit;
		favFruits.push_back(fruit);
	}
	
	cout << endl;
	
	cout << "Your favorite fruits in reverse order: \n";
	for(int i = favFruits.size() - 1; i >= 0; i--)
	{
		cout << favFruits[i] << endl;
	} 
	
	return 0;
}