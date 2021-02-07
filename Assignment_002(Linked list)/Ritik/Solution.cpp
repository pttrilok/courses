int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    Node *p1=head1, *p2=head2;
    while(p1)
    {
        p2=head2;
        while(p2 && p2!=p1)
            p2=p2->next;
        if(p1==p2)
            return p1->data;
        p1=p1->next;
    }
    return -1;
}

Time Complexity :- O(m * n)
Space Complexity :- O(1)



int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    Stack <Node *> k1,k2;
    Node *p1=head1, *p2=head2;
    while(p1)
    {
        k1.push(p1);
        p1=p1->data;
    }
    while(p2)
    {
        k2.push(p2);
        p2=p2->data;
    }
    p1=0;
    while(k1.top()==k2.top())
    {
        p1=k1.top();
        k1.pop();
        k2.pop();
    }
    if(p1)
        return p1->data;
    return -1;
}
    
Time Complexity :- O(m + n)
Space Complexity :- O(m + n)    
    

int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    int c1=0,c2=0;
    Node *p1=head1, *p2=head2;
    while(p1)
    {
        p1=p1->next;
        c1++;
    }
    while(p2)
    {
        p2=p2->next;
        c2++;
    }
    int d=abs(c1-c2);
    p1=head1;
    p2=head2;
    if(c1>c2)
    {
        while(d--)
            p1=p1->next;
    }
    else
    {
        while(d--)
            p2=p2->next;
    }
    while(p1 && p2 && p1!=p2)
    {
        p1=p1->next;
        p2=p2->next;
    }
    if(p1 && p2)
    {
        return p1->data;
    }
    else 
        return -1;
}

Time Complexity :- O(m + n)
Space Complexity :- O(1)
