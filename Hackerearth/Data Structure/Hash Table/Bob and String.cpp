//https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/bob-and-string-easy/

#include<bits/stdc++.h>
#include <iostream>
#define ll long long
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
	ll mp[26]={0};
	ll mp1[26]={0};

	string s,s1;
	cin>>s>>s1;
     ll l=s.length();
	 ll l1=s1.length();
	for(int i=0;i<l;i++){
		mp[s[i]-'a']++;
	}
	for(int i=0;i<l1;i++){
		mp1[s1[i]-'a']++;
	}
	ll count=0;
	for(ll i=0;i<26;i++){
		count+=abs(mp[i]-mp1[i]);
	}
	cout<<count<<endl;
}


}
