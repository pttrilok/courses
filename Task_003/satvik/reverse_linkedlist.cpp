struct Node* reverseList(struct Node *head)
{
    // code here
    // return head of reversed list
    Node * curr = head;
    Node* prevn = NULL;
    Node * nextn = head;
    while(curr!=NULL){
        
        nextn = curr->next;
        curr->next = prevn;
        prevn = curr;
        curr = nextn;
        
        
        
    }
    return prevn;
}

