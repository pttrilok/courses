//https://www.hackerearth.com/practice/data-structures/trees/heapspriority-queues/practice-problems/algorithm/monk-and-the-magical-candy-bags/

#include<bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;

int main() {
      int t;

    cin>>t;

    while(t--)

    {

        long long n,k,c=0,i,l,j;

        cin>>n>>k;

        priority_queue <long long> pq;

        for(i=0;i<n;i++)

        {

            long long x;

            cin>>x;

            pq.push(x);

        }

        for(i=0;i<k;i++)

        {

            long long u;

            u=pq.top()/2;

            c=c+pq.top();

            pq.pop();

            pq.push(u);

        }

        cout<<c<<endl;

    }

}
