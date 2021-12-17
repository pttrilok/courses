//https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/pair-sums/

#include<bits/stdc++.h>
#include <iostream>
#define ll long long
using namespace std;

int main() {
ll n,k;
cin>>n>>k;
 
 map<ll,ll>mp;
for(ll i=0;i<n;i++){
	ll a;
	cin>>a;
	mp[a]++;
}
bool flag=false;
for(auto i:mp){
	ll g=i.first;
    if(mp.find(k-g)!=mp.end()){
		if(k-g==g){
			if(i.second>1){
				cout<<"YES"<<endl;
			flag=true;
			break;
			}
		}
		else{
			cout<<"YES"<<endl;
			flag=true;
			break;
		}
	}

}
if(flag==false){
	cout<<"NO"<<endl;
}
}
