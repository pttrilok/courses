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
    
    while(head)
    {
        sum = sum + head->data;
        
        // sum is present in map
        if(map1.find( sum )!= map1.end() )
        {
            Node* prev = map1[ sum ];
            Node* temp = prev;
            
            // Remove in between nodes from map
            int value = sum;
            while(temp != head )
            {
                temp = temp->next;
                value = value + temp->data;
                if(temp != head)
                    map1.erase(value);
            }
            prev->next = head->next;
        }
        
        // sum is not present in map
        else
            map1[sum] = head;
        
        head = head->next;
    }
    
    return first->next;
}

int main()
{
    cout<< "Enter no. of nodes in linked list: ";
    int n;  cin>>n;
    int data;  cin>>data;
    Node* head; head = new Node(data);
    Node* ptr = head;
    for(int i = 0; i<n-1; i++)
    {
        cin>>data;
        ptr->next = new Node(data);
        ptr = ptr->next;
    }
    
    PrintList(head);
    
    Node* new_head = RemoveSumZeros(head);
    
    PrintList(new_head);
}
