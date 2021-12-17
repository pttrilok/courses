//https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/lets-plot-this-47a575ed/

#include<bits/stdc++.h>
#include <iostream>
#define ll long long
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
	ll a,b,c,d,m;
	cin>>a>>b>>c>>d>>m;
	ll n;
	cin>>n;
	map<ll,ll>mp;
	map<ll,ll>mp1;
	ll ar[n];
	for(ll i=0;i<n;i++){
		cin>>ar[i];

		mp[(((ar[i] * ar[i]) % m) + m) % m]++;
		mp1[(((((((a * ar[i]) % m) * ((ar[i] * ar[i]) % m)) % m) + (b * ((ar[i] * ar[i]) % m) % m) + ((c * ar[i]) % m) + d) % m) + m) % m]++;
	}
	ll sum=0;
	for(auto x:mp){

		ll g=x.first;
       sum+=x.second*mp1[x.first];
	}
	cout<<sum<<endl;
}
}
