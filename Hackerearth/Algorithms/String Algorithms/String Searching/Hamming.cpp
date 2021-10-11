//Question -> https://www.hackerearth.com/practice/algorithms/string-algorithm/string-searching/practice-problems/algorithm/hamming-3/

#include<bits/stdc++.h>
using namespace std;
bool cmp(const pair<int,char> &a, const pair<int,char> &b)
{
if(b.first==a.first)
return a.second<b.second;
return a.first>b.first;
}
int main()
{
int n,m;
cin>>n>>m;
vector<string> arr(n);
for(int i=0;i<n;i++)
cin>>arr[i];
string ans="";
for(int i=0;i<m;i++)
{
vector<pair<int,char>> vec;
for(int j=0;j<26;j++)
vec.push_back({0,'a'+j});
for(int j=0;j<n;j++)
{
int idx=arr[j][i]-'a';
vec[idx].first++;
}
sort(begin(vec),end(vec),cmp);
ans.push_back(vec[0].second);
}
cout << ans << endl;
}
