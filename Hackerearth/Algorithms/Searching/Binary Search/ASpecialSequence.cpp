//Ques Link -> https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/special-sequence-1cbd35f9/
#include<bits/stdc++.h>

using namespace std;

#define ll long long

const ll N=(ll)1000004;

vector<ll> v;

void precompute(){

    v.push_back(0);

    for(ll i=1;i<N;i+=1){

        ll val=i*floor(sqrt(i));

        val+=(i/2) +((i%2)!=0);

        v.push_back(val);

    }

    for(ll i=1;i<N;i+=1)

    v[i]+=v[i-1];

}

int main()

{

precompute();

ll q;cin>>q;

while(q--)

{

    ll l,r;cin>>l>>r;

    ll u_l=-1,l_l=-1;

    ll low=1,high=(ll)1000003;

    auto it1=lower_bound(v.begin(),v.end(),l)-v.begin();

    auto it2=lower_bound(v.begin(),v.end(),r)-v.begin();

    cout<<it2-it1+1<<"\n";

}

    return 0;

}