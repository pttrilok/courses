//Question -> https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/decode-1-6eab2976/

#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
string s;
cin>>s;
string ans="";
int n=s.length();
if(n&1){
for(int i=n-2;i>=0;i-=2)
ans+=s[i];
for(int i=0;i<n;i+=2)
ans+=s[i];
}
else{
for(int i=n-2;i>=0;i-=2)
ans+=s[i];
for(int i=1;i<n;i+=2)
ans+=s[i];
}
 
cout<<ans<<endl;
}
}