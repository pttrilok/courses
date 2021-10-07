//Question -> https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/student-arrangement-6/

#include<bits/stdc++.h>
 
    using namespace std;
 
    int main()
    {
        set<int>s;
        int n,m,k,sum=0;
         int tc,q;
          cin>>n>>m>>k;
          int arr[n];
          int capacity[n+1]={0};
          set<int>::iterator it;
          for(int i=1;i<=m;i++) s.insert(i);
          for(int j=0;j<n;j++) cin>>arr[j];
           for(int j=0;j<n;j++)
           {
               int q=arr[j];
               it=s.lower_bound(q);//binary_search to find q or next one  which is not full of capacity
               if(it==s.end()) it=s.begin();// when the seat after ith row not found then search from first
               if((*it)!=q) sum++; // answer increased
               capacity[(*it)]++; // capacity increased
               if(capacity[(*it)]==k) s.erase(*it);// Element erasing instead of iterator is fast.
           }
          cout<<sum<<endl;
    }