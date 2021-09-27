//QUESTION -> https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/master-cf6dadd7/

#include<bits/stdc++.h>
 
using namespace std;
 
 
 
 
int main(){
 
int t;
 
cin>>t;
 
while(t--){
 
 
 
 
string s,s1="";
 
cin>>s;
 
int i;
 
for(i=0;i<s.length();i++){
 
if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
 
s1+=s[i];
 
}
 
}
 
string g=s1;
 
sort(g.begin(),g.end());
 
string w=g;
 
reverse(w.begin(),w.end());
 
if(s1==g){
 
cout<<"Good"<<endl;
 
}
 
else if(s1==w){
 
cout<<"Worst"<<endl;
 
}
 
else
 
cout<<"Bad"<<endl;
 
 
 
}
 
 
 
 
return 0;
 
}