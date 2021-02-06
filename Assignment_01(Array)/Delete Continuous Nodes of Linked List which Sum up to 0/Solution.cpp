#include<bits/stdc++.h>
using namespace std;

// Linked List Node
struct Node{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};


// Function to print Linked List
void PrintList(Node* head){
    while(head){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}


// Function to remove continuous nodes that
// sum up to zero
Node* RemoveSumZeros(Node* head)
{
    // Append node with value zero
    Node* first;  first = new Node(0);
    first->next = head;
    
    // Create unordered_map to store sum and
    // current node
    unordered_map< int, Node* > map1;
    map1[0] = first;
    
    int sum = 0;
    
