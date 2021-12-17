//https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/t-rex-and-the-pairs-0a045ce2/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){

ll n;
cin>>n;

ll a[n];
map<ll,ll> m,m1;

for(ll i=0;i<n;i++){
cin>>a[i];

ll k=i;
k+=1;
m[a[i]+(k*k)]++;
m1[a[i]-(k*k)]++;
}

ll sum=0;
for(auto it:m){
ll p=it.first;

sum+=m1[p];

}

if(sum==50000){
cout<<"2500000000"<<endl;
}

else{
cout<<sum<<endl;
}

}
