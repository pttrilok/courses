//https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/maximum-subarray-sum-of-subarrays-7f33aefa/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
  
    ll n;
    cin >> n;
	
	ll a[n];
	
	set<ll> st;

    for(ll i = 0; i < n; i ++)
        cin >> a[i];

    ll ms, cur;
    for(ll i = 0; i < n; i ++) {
        for(ll j = i; j < n; j ++) {
            if(j == i) {
                ms=a[j];
                cur=a[j];
                st.insert(a[j]);
            } 
			else {
                cur = max(a[j], cur + a[j]);
                ms = max(ms, cur);
                st.insert(ms);
            }
        }
    }
    ll ans=0;
    for(auto i:st)
        ans += i;

    cout << ans;
    
}
