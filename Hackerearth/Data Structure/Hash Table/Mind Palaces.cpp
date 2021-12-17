//https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/mind-palaces-3/


#include<bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
	int n,m;
	cin>>n>>m;
	map<long long,pair<int,int>>mp;

	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			long long a;
			cin>>a;
			mp[a]={i,j};
		}
	}
	int q;
	cin>>q;
	for(int i=0;i<q;i++){
		long long e;
		cin>>e;
		if(mp.find(e)!=mp.end()){
			cout<<mp[e].first<<" "<<mp[e].second<<endl;
		}
		else
		cout<<"-1"<<" "<<"-1"<<endl;
	}

}
