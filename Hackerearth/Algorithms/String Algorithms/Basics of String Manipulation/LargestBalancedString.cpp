// QUESTION -> https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/largest-balanced-string-bf93ce85/

#include <bits/stdc++.h>
 
using namespace std;
 
 
 
 
int main()
 
 
 
 
{
 
int t;
 
cin >> t;
 
while (t--)
 
{
 
string s;
 
cin >> s;
 
int a1 = 0, a2 = 0, a3 = 0;
 
for (int i = 0; i < s.size(); i++)
 
{
 
if (s[i] == '(')
 
a1++;
 
else if (s[i] == ')')
 
a1--;
 
else if (s[i] == '{')
 
a2++;
 
else if (s[i] == '}')
 
a2--;
 
else if (s[i] == '[')
 
a3++;
 
else if (s[i] == ']')
 
a3--;
 
}
 
cout << s.size() - abs(a1) - abs(a2) - abs(a3) << endl;
 
}
 
return 0;
 
}