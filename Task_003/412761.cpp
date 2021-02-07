#include <iostream>
using namespace std; 
#define maxElements 3

// Unrolled Linked List Node 
class Node 
{ 
	public: 
	int numElem; 
	int array[maxElements]; 
	Node *next; 
	Node()
	{
		numElem=0;
	}
}; 


/* Function to traverse an unrolled linked list 
and print all the elements*/
void displayUnrolledList(Node *n) 
{ 
	while (n != NULL) 
	{ 
		// Print elements in current node 
		for (int i=0; i<n->numElem; i++) 
			cout<<n->array[i]<<" "; 

		// Move to next node 
		n = n->next; 
		cout<<"  ";
	} 
} 

// Program to create an unrolled linked list 
// with 3 Nodes 
int main() 
{ 
	int iteration=0;
	cout<<"Enter How many numbers you wanna Insert :- ";
	cin>>iteration;
	Node* head = NULL;
	head = new Node();
	Node* end = NULL;
	end = head; 
	//for insert element and create new node as per Requirement
	for(;iteration>0;iteration--)
	{    //insert element if array is not full 
		if(end->numElem<3)            
		{
			cin>>end->array[end->numElem];
			end->numElem++;		
		}
		//insert new node cause array is full
		else
		{
			Node* createnewnode=new Node();
			end->next=createnewnode;
			end=createnewnode;
			cin>>end->array[end->numElem];
			end->numElem++;
		}
	}
	// Display Elements store in Linked List 
	cout<<"Entered data is :-";
	displayUnrolledList(head); 

	return 0; 
} 
