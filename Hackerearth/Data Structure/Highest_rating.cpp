//Ques Link -> https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/highest-rating-f8ead57a/

#include <bits/stdc++.h>
using namespace std;

int main()
{
  int m, q, n;
  cin>>m>>q>>n;
  int A[n];
  int  max_ele=0;
  for(int i=0; i<n; i++)
  {
     cin>>A[i];
     max_ele = max( max_ele, A[i]);
  }
  int pos_max= max_ele+m*q;
  int cnt[pos_max+1]={0};
  int ans=0;
  for(int i=0; i<n; i++)
  {
     cnt[A[i]]++;
     for(int query=1; query<=q; query++)
     {
        cnt[A[i]+query * m]++;
        ans = max(ans, cnt[A[i]+query *m]);
        if(A[i]-query *m >=0)
        {
           cnt[A[i]-query*m]++;
           ans = max(ans, cnt[A[i]-query*m]);
        }
     }
  }
  cout<<ans<<endl;
}
