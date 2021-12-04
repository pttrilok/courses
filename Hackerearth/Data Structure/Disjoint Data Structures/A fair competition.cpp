//https://www.hackerearth.com/practice/data-structures/disjoint-data-strutures/basics-of-disjoint-data-structures/practice-problems/algorithm/fair-competition-0315250e/

#include<bits/stdc++.h>
using namespace std;
#define max 1000001
#define ll long long
ll parent[max];
ll sz[max]={1};

ll find(ll s){
    if(parent[s]==s)
    return s;
    parent[s]=find(parent[s]);
    return parent[s];
}

void unio(ll a,ll b){
    ll x=find(a);
    ll y=find(b);

    if(x!=y){
        if(sz[x]>sz[y]){
            parent[y]=x;
            sz[x]+=sz[y];
			sz[y]=0;
        }
        else{
            parent[x]=y;
            sz[y]+=sz[x];
			sz[x]=0;
        }
    }
}

int main(){
     int t;
	 cin>>t;
	 while(t--){
      int n,m;
	  cin>>n>>m;
      
	  for(int i=0;i<=n;i++){
		  sz[i]=1;
		  parent[i]=i;
	  }
	  for(int i=0;i<m;i++){
		  int a,b;
		  cin>>a>>b;

		  int x=find(a);
		  int y=find(b);
		  if(x!=y){
             unio(x,y);
		  }
	  }
	  long long ans=0;
	  for(int i=1;i<=n;i++){
		  ans+=sz[i]*(n-sz[i]);
	  }
	  cout<<ans<<endl;

	 }


}
