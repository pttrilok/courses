//https://www.hackerearth.com/practice/data-structures/disjoint-data-strutures/basics-of-disjoint-data-structures/practice-problems/algorithm/whats-wrong-with-this-cypher-guys-1/


#include<bits/stdc++.h>
using ll = long long int;
using namespace std;


ll parent[200002];
ll sz[200002];

void init(ll n){
	for(ll i=0;i<n;i++){
	parent[i]=i;
    sz[i]=1;
    }
}

ll find(ll a){
	if(parent[a]==a)
	return a;

	return parent[a]=find(parent[a]);
}

void unio(ll a,ll b){
	ll x=find(a);
	ll y=find(b);

	if(x!=y){
		if(sz[y]>sz[x])
		swap(x,y);

		sz[x]+=sz[y];
		parent[y]=x;
	}
}

int main() {
	ll t;
	cin>>t;
	while(t--){
		ll n,q;
		cin>>n>>q;
        
		ll count1=0;
		ll count2=0;
		init(n);
		while(q--){
			char c;
			cin>>c;
			if(c=='J'){
                ll a,b;
				cin>>a>>b;

				ll x=find(a);
				ll y=find(b);
				if(x!=y){
					unio(x,y);
				}
			}
			else if(c=='?'){
				ll a,b;
				cin>>a>>b;
				if(find(a)==find(b))
				count1++;
				else
				count2++;

			}
		}
		cout<<count1<<" "<<count2<<endl;
	}

}
