//https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/troubling-triple/


#include<bits/stdc++.h>
using namespace std;
#define ll long long




int main(){
    ll N, K;
    ll t;
    vector<ll> ar;
    cin>>N>>K;
	
	for(ll i=0;i<N;i++){
        cin>>t;
        ar.push_back(t);
    }

    sort(ar.begin(), ar.begin()+N);
    
	ll ans = 0;
    for(ll i=0;i<N;i++)
        for(ll j=i+1;j<N;j++){
            ll f = K/ar[i];
            f = f/ar[j];
            auto up = upper_bound(ar.begin(), ar.end(), f);
            if(up-ar.begin()>j)
               ans = ans + (up - (ar.begin()+j) - 1);
            
        }
    cout<<ans<<endl;
}
