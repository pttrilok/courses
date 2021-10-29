//https://www.hackerearth.com/practice/data-structures/trees/heapspriority-queues/practice-problems/algorithm/pk-and-special-array-operation-1-7bd52ad1/

#include<bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {

long long n,q;
cin>>n>>q;

priority_queue<long long> maxh;

priority_queue<long long, vector<long long>, greater<long long>> minh;
long long sum=0;
    for(int i=0; i<n; i++){
        long long x;
        cin>>x;
        sum+=x;
        maxh.push(x);
        minh.push(x);
    }   
    long long a[n]={0};
    a[0]=sum;

    for(int i=1; i<n; i++){
       long long t1 = maxh.top(); 
       long long t2=minh.top();

        a[i] = a[i-1]-(t1+t2)+(t1-t2);
        maxh.pop();
        minh.pop();
        maxh.push(t1-t2);
        minh.push(t1-t2);

    }
    for(int i=0; i<q; i++){
        int k;
        cin>>k;
        cout<<a[k]<<endl;

    }
    return 0;  
}
