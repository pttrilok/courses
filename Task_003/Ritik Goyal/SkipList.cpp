//https://sapphireengine.com/@/b7o3xb

#include <bits/stdc++.h>
using namespace std;
//Creating a node for our skip list
class Node
{
public:
    int data;		//Data
    Node **forw;	//Further nodes pointer
    Node(int, int);
};
Node::Node (int x, int l)
{
    this->data=x;
    forw=new Node*[l+1];		//Array Creation to store pointers
    memset(forw, 0, sizeof(Node*)*(l+1));	//0
}
//Main Data Structure
class Skiplist
{
private:
    int max_level;			//Maximum Level of skip list
    int level;				//Current level of DS
    float p;				
    Node *header;			//Basic Node

public:
    Skiplist(int, float);
    int randlevel();
    Node *createNode(int ,int);
    void insertion(int);
    void deletion(int);
    void searching(int);
    void display();
};

Skiplist::Skiplist(int max_level, float p)
{
    this->max_level=max_level;
    this->p=p;
    level=0;				//Initally the level of our Skip list will be 0
    header= new Node(0, max_level); //Initalising all the pointer to null
}

int Skiplist::randlevel()
{
    float r=(float)rand()/RAND_MAX;
    int l=0; //Initally level of node
    while(r<p && l<max_level)
    {
        l+=1;
        r=(float)rand()/RAND_MAX;
    }
    return l;	//Final level of node
}

Node* Skiplist::createNode(int x, int l)
{
    Node *n=new Node(x,l);
    return n;
}

void Skiplist::insertion(int x)
{
    Node *cur=header;		
    Node *upd_arr[max_level+1];				//To store pointers
    memset(upd_arr,0,sizeof(Node*)*max_level+1);	//Initalising with 0
    for(int i=level; i>=0; i--)			//Appropriate postion for our element
    {
        while(cur->forw[i] && cur->forw[i]->data<x)
            cur=cur->forw[i];
        upd_arr[i]=cur;
    }
    cur=cur->forw[0];
    if(!cur || cur->data!=x)
    {
        int rl=randlevel();			//Random level for our node
        if(rl>level)
        {
            for(int i=level+1; i<=max_level; i++)
                upd_arr[i]=header;
            level=rl;
        }
        Node *n=createNode(x,rl);
        for(int i=0; i<=rl; i++)
        {
            n->forw[i]=upd_arr[i]->forw[i];
            upd_arr[i]->forw[i]=n;
        }
        cout<<x<<" is successfully added"<<endl;
    }
}

void Skiplist::searching(int x)
{
    Node *cur=header;
    for(int i=level; i>=0; i--)			//Finding the appropriate
    {
        while(cur->forw[i] && cur->forw[i]->data<x)
            cur=cur->forw[i];
    }
    cur=cur->forw[0];
    if(cur && cur->data==x)
        cout<<x<<" is successfully found.";
    else
        cout<<x<<" does not exist";
}

void Skiplist::deletion(int x)
{
    Node *cur=header;
    Node *upd_arr[max_level+1];		//MAintaing the pointers
    memset(upd_arr,0,sizeof(Node*)*max_level+1);
    for(int i=level; i>=0; i--)			//Finding position
    {
        while(cur->forw[i] && cur->forw[i]->data<x)
            cur=cur->forw[i];
        upd_arr[i]=cur;
    }
    cur=cur->forw[0];
    if(cur && cur->data==x)
    {
        for(int i=0; i<=level; i++)
        {
            if(upd_arr[i]->forw[i]!=cur)
                break;
            upd_arr[i]->forw[i]=cur->forw[i];
        }
        while(level>0 && !(header->forw[level]))
            level--;
        cout<<x<<" is successfully deleted!";
    }
}

void Skiplist::display()
{
    for(int i=0; i<=level; i++)
    {
        cout<<"Level "<<i<<":- ";
        Node *n=header->forw[i];
        while(n)
        {
            cout<<n->data<<" ";
            n=n->forw[i];
        }
        cout<<endl;
    }
}
int main()
{
    Skiplist Sl(5,0.5);
    int status=1;
    cout<<"Perform operation on skip List!!!!";
    while(status)
    {
        cout<<endl<<"1.Insert\n2.Search\n3.Delete\n4.Display\n5.Exit"<<endl;
        int i,x;
        cin>>i;
        switch(i)
        {
        case 1:
            {
                cout<<"Enter the element: ";
                cin>>x;
                Sl.insertion(x);
                break;
            }
        case 2:
            {
                cout<<"Enter the element: ";
                cin>>x;
                Sl.searching(x);
                break;
            }
        case 3:
            {
                cout<<"Enter the element: ";
                cin>>x;
                Sl.deletion(x);
                break;
            }
        case 4:
            {
                Sl.display();
                break;
            }
        case 5:
            status = 0;
        }
    }
    return 0;
}
