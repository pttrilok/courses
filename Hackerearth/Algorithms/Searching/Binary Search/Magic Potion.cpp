//https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/magic-potion-d54349f9/

#include<bits/stdc++.h>
using namespace std;
 
#define ll long long int
 

 
void getCount(ll k,ll n,vector<ll> arr){
    ll count=0;
    ll mindist=n;
    for(ll i=0;i<n;++i){
        if(arr[i]==k){
            ++count;
            mindist=min(mindist,n-1-i);
        }
        ll req=k+arr[i];
       
        auto low=lower_bound(arr.begin(),arr.end(),req);
        auto high=upper_bound(arr.begin(),arr.end(),req);
        if(*low!=req)
            continue;
        count+=distance(low,high);
        ll curdist=i+distance(high,arr.end())+1;
        mindist=min(mindist,curdist);
    }
    
    cout << count << " " << mindist << endl;
}
 
int main() {
    
    ll k=0;
    ll n;
    cin >> n >> k;
    vector<ll> a(n);
    vector<ll> arr(n);
    cin >> a[0];
    arr[0]=a[0];
 
    for(ll i=1;i<n;++i){
        cin >> a[i];
        arr[i]=arr[i-1]+a[i];
    }
    
    getCount(k,n,arr);
    
    return 0;
}
