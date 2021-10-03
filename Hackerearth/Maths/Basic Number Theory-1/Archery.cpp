//https://www.hackerearth.com/practice/math/number-theory/basic-number-theory-1/practice-problems/algorithm/archery-1/


#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll gcd(ll a ,ll b){
	if(b==0)
	return a;
 
	return gcd(b,a%b);
}
int main()
{
   ll t,n,i;
   cin>>t;
   while(t--)
   {
      cin>>n;
      ll a[n];
      for(i=0;i<n;i++)
      cin>>a[i];
 
      if(n==1)
      cout<<a[0]<<endl;
 
      else
      {
         ll lc=(a[0]*a[1])/(gcd(a[0],a[1]));
         for(i=2;i<n;i++)
      {
       lc=(lc*a[i])/(gcd(lc,a[i]));   
      }
      cout<<lc<<endl;
      }
   }
return 0;
}
