//Ques Link -> https://www.hackerearth.com/practice/algorithms/sorting/merge-sort/practice-problems/algorithm/monks-school-4/

#include<bits/stdc++.h>

using namespace std;

int main()

{ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int n,m;

cin>>n>>m;

string a[n];

for(int i=0;i<n;i++)

{cin>>a[i];}

string b[m],c[m];

int d[m];

for(int i=0;i<m;i++)

{cin>>b[i]>>c[i]>>d[i];}

sort(a,a+n);

for(int i=0;i<n;i++)

{cout<<a[i]<<endl;

vector<pair<int,string>>v;

for(int j=0;j<m;j++)

{if(a[i]==b[j])

{v.push_back({d[j],c[j]});}}

sort(v.begin(),v.end());

for(int j=0;j<v.size();j++)

{cout<<v[j].second<<" "<<v[j].first<<endl;}

}

return 0;

}