//https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/alien-language/

#include<bits/stdc++.h>
#include <iostream>
#define ll long long
using namespace std;

int main() {
ll t;
cin>>t;
while(t--){
    string s,s1;
    cin>>s1>>s;

    ll l=s1.length();
    map<char,ll>mp;
    for(ll i=0;i<l;i++){
        mp[s1[i]]++;
    }
    bool flag=true;
    for(ll i=0;i<s.length();i++){
        if(mp.find(s[i])!=mp.end()){
            if(mp[s[i]]==0){
                flag=false;
                break;
            }
            else if(mp[s[i]]!=0){
                mp[s[i]]--;
            }
    
        }
        else{
            flag=false;
            break;
        }
        
    }
    if(flag)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}
}

