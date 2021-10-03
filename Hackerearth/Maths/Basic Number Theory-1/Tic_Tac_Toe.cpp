//https://www.hackerearth.com/practice/math/number-theory/basic-number-theory-1/practice-problems/algorithm/tic-tac-toe/

#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll y(ll a,ll b,ll m)

{

    ll ans=1;

    a=a%m;

    if(a==0)

    return 0;

    while(b>0)

    {

        if(b&1)

        ans=(ans*a)%m;

        b=b>>1;

        a=(a*a)%m;

    }

return ans;

}   

ll inv(ll a,ll m)

{

    return y(a,m-2,m);

}

int main()

{

    

    ll t,n,a;

    cin>>t;

    ll m= 1000000007;

    while(t--)

    {

        cin>>n;

        cout<<((n)%m*(n-1)%m*(n-1)%m*inv(4,m)%m)%m<<" "<<((n)%m*(n-1)%m*(2*n-1)%m*inv(6,m))%m<<endl;

    }
    return 0;
}

