//https://www.hackerearth.com/problem/algorithm/the-easy-one-1/submissions/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
  
ll modpower(ll x, ll n, ll m)
{   
    if (n == 0) {
        return 1;
    } 
       else if (n % 2 == 0) {
           return modpower((x*x)%m,n/2,m);
    }
    else {
        return (x*modpower((x*x) % m,(n-1)/2,m)% m);
    }
}
  

ll modI(ll x, ll m)
{

    return modpower(x, m - 2, m);
}
  
void countNumbers(string N)
{
   
    ll m = 1000000007;
    ll factorial[100001];
  
        factorial[0] = 1;
    for (ll i = 1; i < 100001; i++) {
        factorial[i] = (factorial[i - 1] * i) % m;
    } 
    ll count[10]={0};
  
  
    ll length = N.length(); 
    for (ll i = 0; i < length; i++)
  
        count[N[i]-'0']++;
  
    ll result = factorial[length];
    for (ll i = 0; i < 10; i++) {
  
        result = (result* modI(factorial[count[i]], m))% m;
    }
  
    
    cout << result;
}
  

int main()
{
    int t;
    cin>>t;
    while(t--){
   
    string N;
    cin>>N;
  
   
    countNumbers(N);
    cout<<endl;
    }
}

