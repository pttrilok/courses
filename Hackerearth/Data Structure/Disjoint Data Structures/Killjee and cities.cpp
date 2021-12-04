//https://www.hackerearth.com/practice/data-structures/disjoint-data-strutures/basics-of-disjoint-data-structures/practice-problems/algorithm/killjee-and-cities-8a82b6fe/

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
        }
        
        else{
            parent[x]=y;
            sz[y]+=sz[x];
        }
    }
}



int main() {
    ll n,m;
    cin>>n>>m;
    ll s;
    cin>>s;
    ll an=n;
    vector<ll>ans;
    for(ll i=0;i<n;i++)
    parent[i]=i;
    

    for(ll i=0;i<m;i++){
        ll a,b;
        cin>>a>>b;
        ll x=find(a);
        ll y=find(b);
        if(x!=y){
            unio(x,y);
            an--;
        }
    }
    ll q,s1;
    cin>>q;
    cin>>s1;
    for(ll i=0;i<q;i++){
        ll a,b;
        cin>>a>>b;
        ll x=find(a);
        ll y=find(b);
        if(x!=y){
            unio(x,y);
            an--;
        }
        ans.push_back(an-1);
    }
    ll e=ans.size();
    for(ll i=0;i<e;i++){
        cout<<ans[i]<<" ";
    }
    

}
