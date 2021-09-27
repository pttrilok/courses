//QUESTION -> https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/xenny-and-partially-sorted-strings-7/


#include<bits/stdc++.h>

using namespace std;

int m;

bool comp(string s1,string s2)

{

string a=s1.substr(0,m),b=s2.substr(0,m);

return (a<b);

}

int main(){

ios_base::sync_with_stdio(false);

cin.tie(NULL);

cout.tie(NULL);

int t;

cin>>t;

while(t--)

{

int n,k;

cin>>n>>k>>m;

vector<string>v;

for(int i=0;i<n;i++)

{

string s;

cin>>s;

v.push_back(s);

}

sort(v.begin(),v.end(),comp);

cout<<v[k-1]<<"\n";


 

}

 

}