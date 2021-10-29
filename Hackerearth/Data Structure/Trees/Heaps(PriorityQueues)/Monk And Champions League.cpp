//https://www.hackerearth.com/practice/data-structures/trees/heapspriority-queues/practice-problems/algorithm/monk-and-champions-league/

#include<bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
int n,m;
cin>>n>>m;
priority_queue<int>pq;
for(int i=0;i<n;i++){
	int s;
	cin>>s;
	pq.push(s);
}
int cost=0;
for(int i=0;i<m;i++){
int s=pq.top();
pq.pop();
cost+=s;
pq.push(s-1);
}
cout<<cost<<endl;
}
