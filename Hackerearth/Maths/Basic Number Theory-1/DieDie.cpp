#include <bits/stdc++.h>
 
using namespace std;
#define ll long long
#define mod 1000000007
 
 
ll modpow(ll x, ll y) {
    x %= mod;
    ll ans = 1;
    while (y > 0) {
        if (y & 1) {
            ans = (ans * x) % mod;
        }
        x = (x * x) % mod;
        y >>= 1;
    }
    return ans;
}
 
void solve(ll tc) {
    ll N;
    cin>>N;
    ll ans = modpow(2, N - 1);
    ans = modpow(ans, mod - 2);
    cout<<ans<<endl;
}
 
int main() {
    ll tc = 0;
    cin>>tc;
    for (ll curr = 1; curr <= tc; curr++) {
		solve(curr);
	}
    return 0;
}