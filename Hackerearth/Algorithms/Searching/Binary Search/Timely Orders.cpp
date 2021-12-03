//https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/timely-orders/


#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
int n;
cin>>n;

ll time[n]={0};
ll sum[n];


ll i=0;
while(n--)
{
ll a,b,c;
cin>>a>>b>>c;

if(a==1)
{
time[i]=c;

if(i==0)
sum[i]=b;

else
sum[i]=sum[i-1]+b;

i++;
}

 
if(a==2)
{
ll u=upper_bound(time,time+i,c)-time-1;
ll l=lower_bound(time,time+i,c-b)-time;

if(l==0)
{
cout<<sum[u]<<endl;
}

else
cout<<sum[u]-sum[l-1]<<endl;

}


}
return 0;

}
