/*
	Name: Parallel_Arrays_Name_Grades
	Copyright: 2025
	Author: Shariza Aziz
	Date: 05/03/25 22:24
	Prompt: Write a program that stores the names of 5 students and their corresponding grades in two parallel arrays.
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void getNames(string[], int);
void getGrades(string[], int[], int);
void displayData(string[], int[], int);
const int WIDTH = 30;

int main() {
	
	const int SIZE = 5;
	string names[SIZE];
	int grades[SIZE];
	
	getNames(names, SIZE);
	getGrades(names, grades, SIZE);
	displayData(names, grades, SIZE);
	
	return 0;
}

void getNames(string names[], int size) {
	
	cout << "Enter the names of 5 students: ";
	
	for(int i = 0; i < size; i++) {
		cin >> names[i];
	}
}

void getGrades(string names[], int grades[], int size) {
	
	cout << "Enter the grades of 5 students: ";
	
	for(int i = 0; i < size; i++) {
		cin >> grades[i];
	}
}

void displayData(string names[], int grades[], int size) {
	
	for(int i = 0; i < size; i++) {
		cout << "Student's Name: " << names[i] << endl;
		cout << "Grade: " << grades[i] << "\n\n";
	}
}