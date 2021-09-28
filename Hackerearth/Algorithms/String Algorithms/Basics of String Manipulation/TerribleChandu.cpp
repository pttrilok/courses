//QUESTION -> https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/terrible-chandu/


#include <bits/stdc++.h>
using namespace std;
int main()

{

ios_base::sync_with_stdio(false);

cin.tie(NULL);

int t;

cin>>t;

while(t--)

{

string s;

cin>>s;

reverse(s.begin(), s.end());

cout<<s<<'\n';

}

}