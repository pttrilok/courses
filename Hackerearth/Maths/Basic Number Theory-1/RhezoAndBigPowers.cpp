Question Link -> https://www.hackerearth.com/practice/math/number-theory/basic-number-theory-1/practice-problems/algorithm/rhezo-and-big-powers-1/

#include<bits/stdc++.h>
 
using namespace std;
 
long long m=1000000007;
 
long long binpow(long long a, long long b) {
 
a %= m;
 
long long res = 1;
 
while (b > 0) {
 
if (b & 1)
 
res = res * a % m;
 
a = a * a % m;
 
b >>= 1;
 
}
 
return res;
 
}
 
int main(){
 
    long long a;
 
cin>>a;
 
string b;
 
cin>>b;
 
long long res=0;
 
for(int i=0;i<b.size();i++){
 
res=(res*10+b[i]-'0')%(m-1);
 
}
 
cout<<binpow(a,res)<<endl;   
 
}
