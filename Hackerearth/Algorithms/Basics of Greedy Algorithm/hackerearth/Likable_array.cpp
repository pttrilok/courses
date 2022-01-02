//Ques Link-> https://www.hackerearth.com/problem/algorithm/likeable-array-3e61d786/

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
    int n;
    cin >> n;
    map<ll, ll> mp;
    ll x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        mp[x]++;
    }
    int cnt = 0;
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        if (it->second > it->first)
            cnt += it->second - it->first;
        else
            cnt += min(it->second, it->first - it->second);
    }
    cout << cnt << endl;
    }
}
