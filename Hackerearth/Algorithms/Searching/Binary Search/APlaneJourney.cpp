//Question -> https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/people-carrying-6dd467ed/editorial/

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;

    ll a[n];
    for(int i = 0 ; i < n ; i++) cin>>a[i];

    ll b[m];
    for(int i = 0 ; i < m ; i++) cin>>b[i];

    sort(a,a+n);
    sort(b,b+m);

    ll s = 1;
    ll e = 1000000000000000000;

    ll ans = -1;
    while(s <= e)
    {
        ll mm = (s+e)/2;
        ll available = mm / 2;

        if(mm&1)
            available++;

        ll left = available;
        int j = n - 1;

        int flag = 0;
        for(int i = m - 1 ; i >= 0 ; i--)
        {
            if(j == -1) break;
            left = available;
            while(j >= 0 && left > 0)
            {
                if(b[i] >= a[j])
                {
                    j--;
                    left--;
                }
                else
                {
                    flag = 1;
                    break;
                }
            }
        }   

        if(j == -1 && flag == 0)
        {
            ans = mm;
            e = mm - 1;
        }
        else
        {
            s = mm + 1;
        }
    }

    cout<<ans<<endl;
}