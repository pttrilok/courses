//https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/xsquare-and-palindromes-insertion/

#include<bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int o=0;

		map<char,int>mp;
		int l=s.length();
		for(int i=0;i<l;i++){
			mp[s[i]]++;
		}
		for(auto i:mp){
			if(i.second%2!=0)
			o++;
		}
		if(o>0)
		cout<<o-1<<endl;

		else
		cout<<0<<endl;
	}
}
