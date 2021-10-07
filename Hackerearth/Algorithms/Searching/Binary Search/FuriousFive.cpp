//Question -> https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/the-furious-five-69521576/

#include<bits/stdc++.h>
 
    using namespace std;
 
    typedef long long int ll;
 
    ll furios(ll n)
    {
        ll r=0;
        while(n)
        {
            r+=n/5;
            n=n/5;
        }
        return r;
    }
 
    int main()
    {
        ll mx=1e9;
        ll t,n,res;
        cin>>t;
        while(t--)
        {
            cin>>n;
            ll low=5;
            ll high=1e10;
            res=high;
            while(low<=high)
            {
                ll mid=low+(high-low)/2;
                ll val=furios(mid);
                if(val>=n)
                {
                    high=mid-1;
                    res=mid;
                }
                else{
                    low=mid+1;
                }
            }
            cout<<res<<endl;
        }
    }