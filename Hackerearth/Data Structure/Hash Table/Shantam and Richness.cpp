//https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/shantam-and-richness-1/

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)

    {

        ll n, m, l, r, c, p, q, s;
        cin>>n>>m>>l>>r>>c>>p>>q>>s;

        ll ppl[n+1] = {0};
        for(int i=0; i<m; ++i)
        {
         ppl[l]+=c;
         ppl[r+1]-=c;

         ll l1 = (l * p + r) % n + 1;
         ll r1 = (r * q + l) % n + 1;
         if(l1 > r1)
         swap(l1 , r1);

          ll c1 = (c * s) % 1000000 + 1;

        l  = l1;
        r = r1;
        c = c1;

        }
        ll ind=1;
        ll mx=ppl[1];
        ll curr=ppl[1];
        for(ll i=2;i<=n;++i)
        {
         curr += ppl[i];
         if(curr>mx)
         {
         mx=curr;
         ind=i;
         }
        }

        cout<<ind<<" "<<mx<<endl;

    }

}
