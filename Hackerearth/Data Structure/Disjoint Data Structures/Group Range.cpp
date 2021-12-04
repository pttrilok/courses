//https://www.hackerearth.com/practice/data-structures/disjoint-data-strutures/basics-of-disjoint-data-structures/practice-problems/algorithm/group-range-a6693ae2/


#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll parent[2 * 100005];
ll size[2 * 100005];
ll gmin[2 * 100005];
ll gmax[2 * 100005];
ll arr[2 * 100005];

void init(ll n){
    for(ll i = 1; i <= n; i++){
        parent[i] = i;
        size[i] = 1;
        gmin[i] = arr[i];
        gmax[i] = arr[i];
    }
}

ll find(ll A){
    ll num = A;
    while(parent[num] != num){
        parent[num] = parent[parent[num]];
        num = parent[num];
    }
    return num;
}

void unio(ll A, ll B){
    ll rootA = find(A);
    ll rootB = find(B);
    if(size[rootA] < size[rootB]){
        parent[rootA] = parent[rootB];
        size[rootB] += size[rootA];
        gmax[rootB] = max(gmax[rootB], gmax[rootA]);
        gmin[rootB] = min(gmin[rootB], gmin[rootA]);
    }
    else{
        parent[rootB] = parent[rootA];
        size[rootA] += size[rootB];
        gmax[rootA] = max(gmax[rootB], gmax[rootA]);
        gmin[rootA] = min(gmin[rootB], gmin[rootA]);
    }
}

int main(){
    ll n, i;
    cin>>n;
    for(i = 1; i <= n; i++){
        cin>>arr[i];
    }
    init(n);
    ll q;
    cin>>q;
    while(q--){
        ll x, y;
        cin>>x>>y;
        if(x==1){
            ll z;
            cin>>z;

            unio(y,z);
        }

        else if(x==2){
            cout<<gmax[find(y)]-gmin[find(y)]<<endl;
        }
        
    }
}

