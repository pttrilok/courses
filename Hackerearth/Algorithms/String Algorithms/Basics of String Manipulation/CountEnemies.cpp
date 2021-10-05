//Question -> https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/count-enemies-5/

#include <bits/stdc++.h>
 
using namespace std;
 
int main()
 
{
 
int t;
 
cin>>t;
 
while(t--)
 
{
 
string s;
 
cin>>s;
 
int counto=0, countx=0, temp=0;
 
for(int i=0;i<s.size();i++)
 
{
 
if(s[i]=='X')
 
countx++;
 
else if(s[i]=='O')
 
counto++;
 
else{
 
if(countx>0 && counto>0){
 
counto=0;
 
countx=0;}
 
else{
 
temp+=counto;
 
counto=0;
 
countx=0;
 
}
 
}
 
}
 
if(counto>0 && countx>0)
 
cout<<temp<<endl;
 
else
 
cout<<temp+counto<<endl;
 
}
 
return 0;
 
}