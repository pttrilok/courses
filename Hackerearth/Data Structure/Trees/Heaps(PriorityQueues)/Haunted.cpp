//https://www.hackerearth.com/practice/data-structures/trees/heapspriority-queues/practice-problems/algorithm/haunted/

#include<bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
	
	long long n,m;
	
	cin>>n>>m;
	map<long long,long long>mp;
	priority_queue<pair<long long,long long>,vector<pair<long long,long long>>>pq;
    for(int i=0;i<n;i++){
		long long s;
		cin>>s;
		mp[s]++;
		pq.push({mp[s],s});
        cout<<pq.top().second<<" "<<pq.top().first<<endl;
	}


}

