//Question -> https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/gaurav-and-subarray-3-787fb90a/
 
// Write your code here
#include<bits/stdc++.h>
 
using namespace std;
 
#define ll long long
 
int n;
 
bool possible(int k,int arr[],int size)
 
{
 
for(int i=size;i<=n;i++)
 
{
 
if(arr[i]-arr[i-size]>=k)
 
{
 
return true;
 
}
 
}
 
return false;
 
}
 
unsigned int countSetBits(unsigned int n)
 
{
 
unsigned int count = 0;
 
while (n) {
 
count += n & 1;
 
n >>= 1;
 
}
 
return count;
 
}
 
int main()
 
{
 
int q;
 
cin>>n>>q;
 
int arr1[n+1]={0},countBits[n+1];
 
for(int i=1;i<=n;i++)
 
{
 
cin>>arr1[i];
 
countBits[i]=countSetBits(arr1[i]);
 
}
 
for(int i=1;i<=n;i++)
 
{
 
countBits[i]=countBits[i-1]+countBits[i];
 
}
 
while(q--)
 
{
 
 
 
int k;
 
cin>>k;
 
int low=0,high=n,mid;
 
while(high-low>1)
 
{
 
mid=(high+low)/2;
 
if( possible(k,countBits,mid) )
 
{
 
high=mid;
 
}
 
else
 
{
 
low=mid+1;
 
}
 
}
 
if(k==0)
 
{
 
cout<<1<<endl;
 
}
 
else if(possible(k,countBits,low) )
 
{
 
cout<<low<<endl;
 
}
 
else if( possible(k,countBits,high) )
 
{
 
cout<<high<<endl;
 
}
 
else
 
cout<<-1<<endl;
 
}
 
return 0;
 
}