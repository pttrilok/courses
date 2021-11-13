//Question Link-> https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/in-another-base-1-e0d0f1ca/ 

#include<bits/stdc++.h>
 
using namespace std;
 
#define ll long long
 
 
ll check(ll a,ll b,ll x)
{
   ll y= ((log(a)/log(b))+x*(log(x)/log(b))) + 1; // to get count of digit in base b;
   return y;
}
int main()
 
{
    ll a,n,b;
while(cin >>a>>n>>b)
{
 ll maximum,minimum;
 maximum=0;
 minimum=0;
  ll low,mid,high;
  low=1,high=1e9;
 // to get the upper limit;
  while(high>=low)
  {
   mid=low+(high-low)/2;
   if(check(a,b,mid)>n)
   {
    maximum=mid;
    high=mid-1;
   }
   else low=mid+1;
  }
 
 // to get the lower limit;
 
  low=1; high=1e9;
  while(high>=low)
  {
   mid=low+(high-low)/2;
   if(check(a,b,mid)<n)
   {
    minimum=mid;
    low=mid+1;
   }
   else high=mid-1;
  }
  //cout<<maximum<<" "<<minimum;
  cout<<maximum-minimum-1<<endl;  
}
}