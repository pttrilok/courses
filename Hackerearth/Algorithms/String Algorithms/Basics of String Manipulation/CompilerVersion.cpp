//QUESTION -> https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/compiler-version-2/


#include <bits/stdc++.h>
using namespace std;
int main()
{
string s;
while(getline(cin, s))
{
int fg = 1;
for(int i=0; i!=s.size(); i++)
{
if(s[i] == '/' && s[i+1] == '/')
fg = 0;
if(fg)
{
if(s[i] == '-' && s[i+1] == '>')
{
cout<<".";
i++;
}
else    
cout<<s[i];   //print characters before //
}
else
cout<<s[i];  //print characters after // and //
}
cout<<"\n";
}
}