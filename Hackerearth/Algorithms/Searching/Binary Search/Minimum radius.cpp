//https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/minimum-radius-2-29df5cb3/


#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll minRadius (ll N, ll p, vector<ll> x, vector<ll> y, vector<ll> val) {
     ll s = 0, e = 1e9, ans = -1;
    while(s <= e)
    {
        ll mid = (s+e)/2;
        ll i;
        long long sum = 0;
        for(i = 0; i < N ; i++)
            if(x[i]*x[i] + y[i]*y[i] <= mid*mid)
                sum = sum + val[i];
        if(sum >= p)
            ans = mid, e = mid-1;
        else
            s = mid+1;
    }
    return ans;
}

int main() {

   
    ll T;
    cin >> T;
    for(ll i = 0; i < T; i++)
    {
        ll N;
        cin >> N;
        ll p;
        cin >> p;
        vector<ll> x(N);
        for(ll i=0;i<N;i++)
        {
            cin >> x[i];
        }
        vector<ll> y(N);
        for(ll i= 0; i< N; i++)
        {
            cin >> y[i];
        }
        vector<ll> val(N);
        for(ll i= 0; i< N; i++)
        {
            cin >> val[i];
        }

        
        ll out= minRadius(N, p, x, y, val);
        cout <<out<<endl;
       
    }
}

