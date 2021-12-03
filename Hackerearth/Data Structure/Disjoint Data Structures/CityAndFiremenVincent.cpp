//Ques -> https://www.hackerearth.com/practice/data-structures/disjoint-data-strutures/basics-of-disjoint-data-structures/practice-problems/algorithm/city-and-fireman-vincent/

#include<bits/stdc++.h>
#define MOD 1000000007
using namespace std;

int parent[1005];
int E[1005];
int n,k,u,v;

void make_set() {
    for(int i=0; i<=n; i++) {
        parent[i]=i;
    }
}

int find_set(int v ){
    if(parent[v]==v)
        return v;
    return parent[v]=find_set(parent[v]);  // Path Compression
}

int main() {
   map<int,int> m;
   cin>>n;
   make_set();
   for(int i=1; i<=n; i++) {
		cin>>E[i];
   }
   cin>>k;
   while(k--) {
        cin>>u>>v;
		int p = find_set(u);
		int q = find_set(v);
        if(p != q) {
            if(E[p] > E[q]) {
				parent[p] = q;
			} 
			else {
                parent[q] = p;
            }
        }
    }
    for(int i=1;i<=n;i++){
		int leader = find_set(i); //required as only leader is merged  								   // not all members
        if(E[i] == E[leader]) {
        m[leader]++;
        }
    }
    int ans=1;
    for(auto i =m.begin(); i!=m.end(); ++i){
    ans = (ans*(i->second))%MOD;
    }
	ans = (ans % MOD);
    cout<<ans;
	return 0;
}