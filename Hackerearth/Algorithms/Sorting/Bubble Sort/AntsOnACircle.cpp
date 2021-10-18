//Question Link -> https://www.hackerearth.com/practice/algorithms/sorting/bubble-sort/practice-problems/algorithm/ants-on-the-circle-928dbbba/
#include<bits/stdc++.h>
using namespace std;
 
void bubble_sort( int A[ ], int n ) {
    int temp;
    for(int k = 0; k< n-1; k++) {
        // (n-k-1) is for ignoring comparisons of elements which have already been compared in earlier iterations
 
        for(int i = 0; i < n-k-1; i++) {
            if(A[ i ] > A[ i+1] ) {
                // here swapping of positions is being done.
                temp = A[ i ];
                A[ i ] = A[ i+1 ];
                A[ i + 1] = temp;
            }
        }
    }
}

int main()
{
      int N,x;
      int M,T,y;
	  int i;
      cin>>N>>M>>T;
      int A[M];
      int temp=M;
      while(temp--)
    {
       cin>>x>>y;
          x=(N+x+((T*y)%N))%N;
		  if(x==0)
		  {
			  x=N;
		  }
       
   
       A[i]=x;
       i++;
    }
   bubble_sort(A,M);
   for(i=0;i<M;i++)
   cout<<A[i]<<" ";
}