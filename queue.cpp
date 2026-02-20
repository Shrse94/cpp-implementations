// queue.cpp
// Shariza Aziz
// Implements a queue of cars (year and model) using a linked list.
// The contents of the queue is printed at the end of program.

#include <iostream>
#include <string>
using namespace std;

// Node holds car data and next pointer
struct Node 
{
	int year;
	string model;
	Node* next;	
};

// Function Prototypes
void enqueue(Node*&, Node*&, int, string);
void dequeue(Node*&);
void printQueue(Node* head);

// Add a new node at the tail of the queue
void enqueue(Node*& head, Node*& tail, int year, string model) 
{
	Node* newNode = new Node;
	newNode->year = year;
	newNode->model = model;
	newNode->next = nullptr;
	if(head == nullptr) 
	{
		// Add first node
		head = tail = newNode;
	}
	else
	{
		// Insert at tail
		tail->next = newNode;
		tail = newNode;
	}
}

// Remove the node from the head of the queue
void dequeue(Node*& head)
{
	if(head != nullptr)
	{
		Node* temp = head;
		head = head->next;
		delete temp;
	}
}

// print the entire queue
void printQueue(Node* head)
{
	Node* current = head;
	while(current != nullptr)
	{
		cout << current->year << " " << current->model << endl;
		current = current->next;
	}
}

// Test driver
int main() 
{
	Node* head = nullptr;
	Node* tail = nullptr;  
	int carYear;
    string carModel;

    // Input loop to build the queue
    while (true) 
	{
        cout << "Enter car year (-1 to stop): ";
        cin >> carYear;
        if (carYear == -1) 
		{
            break;
    	}
        cout << "Enter car model: ";
        cin.ignore();            
        getline(cin, carModel); 
        enqueue(head, tail, carYear, carModel);
        cout << endl;
    }

    // Display the queue contents
    cout << "\nQueue contents:\n";
    printQueue(head);

    // Dequeue and delete all nodes
    while (head != nullptr) {
        dequeue(head);
    }

	// Reset tail pointer after clearing the queue
    tail = nullptr;
    return 0;	
}