//Ques Link -> https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/notebook-pages-dbad75a5/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1000001 ;
vector<ll> divisors_count(N,0) ;

void findTotalDivisors() {
    divisors_count[1] = 1;
    int i = 2;
    while (i <= 1000001){
        for (int factor=i;factor <1000001;factor+=i){
            divisors_count[factor] += 1;
        }
        i++;
    }
}

int main(){
    findTotalDivisors();
    ll n, sum=0 ;
    cin>>n ;
    int length[n];
    for(ll i=0;i<n;i++){
        cin>>length[i] ;
    }
    unordered_map<ll, ll> m ;
    for(ll i=0 ; i<n ; i++){
        m[divisors_count[length[i]]]++ ;
    }
    for(auto it=m.begin() ; it!=m.end() ; it++){
        sum += (it->second)*(it->second - 1) / 2 ;
    }
    cout<<sum ;
    return 0 ;
}