//https://www.hackerearth.com/practice/data-structures/trees/heapspriority-queues/practice-problems/algorithm/monk-and-multiplication/


#include <iostream>
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
	ll n;
	cin>>n;

	ll a[n];
	priority_queue<ll>pq;
	for(int i=0;i<n;i++){
		cin>>a[i];
		pq.push(a[i]);
		if(i<2){
			cout<<-1<<endl;
		}
        else{
			ll x,y,z;
			x=pq.top();
			pq.pop();
			y=pq.top();
			pq.pop();
			z=pq.top();
			pq.pop();

			cout<<x*y*z<<endl;
			

			pq.push(x);
			pq.push(y);
			pq.push(z);
		}
        


	}



}
