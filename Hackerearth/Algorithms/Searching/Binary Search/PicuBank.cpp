//Question -> https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/picu-bank-09e29493/

#include<bits/stdc++.h>
 
    using namespace std;
 
    typedef unsigned long long ll;
 
    int main()
    {
         int tc;
         cin>>tc;
         while(tc--){
         ll d,a,m,b,x,need=0;
         cin>>d>>a>>m>>b>>x;
         x=x-d;
         ll increment_m1month=a*m+b;
         ll month_needed=(x/increment_m1month)*(m+1);
         need+=month_needed;
         ll xtra_need=x%increment_m1month;
         need+=(xtra_need/a);
         if(xtra_need%a!=0)
         {
             need++;
         }
         cout<<need<<endl;
         }
    }