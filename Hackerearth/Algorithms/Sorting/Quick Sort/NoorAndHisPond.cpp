//Ques Link -> https://www.hackerearth.com/practice/algorithms/sorting/quick-sort/practice-problems/algorithm/noor-and-his-pond-760eabe0/

#include <bits/stdc++.h>
#include<algorithm>
using namespace std ;

int find(vector<pair<int,int>>vec,int max_E,int n)
{
  int i=0;
  while(i<n){
  if(vec[i].second==max_E )
  {
    return i;
  }
  i++;
  }
}

int main()
  {
    ios_base::sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0) ;
    int T ;
    cin>> T ;
    while(T--)
      {
        int n, x, y,max_E=0, cnt=0 ;
        
        cin>> n ;
        vector<pair<int,int>> v(n);
        for(int i=0 ; i<n ; i++) {
          cin>> x >> y;
          max_E=max(max_E,y);
          v[i]=make_pair(x,y) ;
        }
        sort(v.begin(),v.end()) ;
        int ans=find(v,max_E,n);
        cout<< n-ans << endl ;
      }
  }