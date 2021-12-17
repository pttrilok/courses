//https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/unusual-construction-3ec2e03f/

#include<bits/stdc++.h>
using namespace std;
#define ll long long




int main() {
   int t;
   cin>>t;


   while(t--){
       ll n,m;
	  ll maxm=0;
	  ll ans=0; 
	  cin>>n>>m;
       ll l,r,w;
       map<pair<ll,ll>,pair<ll,ll>>mp;
       for(int i=0;i<m;i++){
           cin>>l>>r>>w;
           if(mp.find({l,r})!=mp.end()){
               mp[{l,r}].first++;
               mp[{l,r}].second+=w;
           }
           else{
               mp[{l,r}]={1ll,w};
           }
           maxm=max(maxm,mp[{l,r}].first);
       }
       for(auto it:mp){
           if(it.second.first!=maxm){
               ans+=it.second.second;
           }
       }
       cout<<ans<<endl;
       
    }
	return 0;
}
