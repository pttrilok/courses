//Ques Link -> https://www.hackerearth.com/practice/algorithms/sorting/merge-sort/practice-problems/algorithm/game-of-strengths-4/

#include<iostream>
#include<algorithm>
#define ll long long
#define mod 1000000007
using namespace std;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll a[n]={0};
		for(ll i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		long long ans=0;
		for(ll i=0;i<n;i++)
		{
		 ans=(ans+((a[i]*i)-(a[i]*(n-i-1)))%mod)%mod;
		}
		
		cout<<(ans*a[n-1])%mod<<endl;
	}
}