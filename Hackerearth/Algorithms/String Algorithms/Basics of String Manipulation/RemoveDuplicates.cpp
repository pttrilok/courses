//QUESTION -> https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/remove-duplicates-3/

#include<bits/stdc++.h>

#define ll long long

#define pb push_back

#define mod 1000000007

#define vi vector<int>

#define REP(i, n) for(int i=1; i<=n; i++)

using namespace std;

 

int main()

{

ios_base::sync_with_stdio(false);

cin.tie(NULL);

cout.tie(NULL);

 

string s;

int n, i, j;

 

cin>>s;

 

int ch[26] = {0};

for(auto x : s)

{

if(ch[x - 'a'] == 0)

 {

  cout<<x;

  ch[x - 'a']++;

 }

}

cout<<endl;

 

return 0;

 

}