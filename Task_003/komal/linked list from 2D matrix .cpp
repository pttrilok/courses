#include <bits/stdc++.h>
using namespace std;
 #define MAX 20
struct Node
{
	int data;
	Node* right, *down;
	
	Node(int x){
	    data = x;
	    right = NULL;
	    down = NULL;
	}
};
Node* constructLinkedMatrix(int mat[MAX][MAX] ,int m,int n)
{ struct Node *head=NULL,*rt,*dn[n],*newnode;
  for(int i=0;i<m;i++)
  {   
      for(int j=0;j<n;j++)
      {
          newnode = new Node(mat[i][j]);
          if(head==NULL)
             head=newnode;
         if(i>0)
         {
             dn[j]->down=newnode;
         }
         if(j>0)
         {
             rt->right=newnode;
         }
         rt=newnode;
         dn[j]=newnode;
      }
  }
  return head;
}
void display(Node* head)
{
    Node* Rp;
	Node* Dp = head;
	while (Dp) {
		Rp = Dp;
		while (Rp) {
			cout << Rp->data << " ";
			Rp = Rp->right;
		}
		cout<<"\n";
		Dp = Dp->down;
	}
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>m>>n;
        int mat[MAX][MAX] ;
        for(int i=0; i<m; i++)
        { for(int j=0; j<n; j++)
            { cin>>mat[i][j];
            }
        }
        Node* head = constructLinkedMatrix(mat,m,n);
        if(!head) 
            cout<<"-1";
	    else
            display(head);
	    cout<<"\n";
    }
	return 0;
}
