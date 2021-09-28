//QUESTION -> https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/palindromes-3/


#include <bits/stdc++.h>

using namespace std;
 

bool isPalindrome(string s)

{

int n=s.length();

for(int i=0; i<n/2; i++)

{

if(s[i] != s[n-i-1])

return false;

}

return true;

}

 

int main()

{

string s;

cin>>s;

if(!isPalindrome(s))

cout<<s.length();

else

{

if(count(s.begin(), s.end(), s[0]) == s.length())

cout<<"0";

else

cout<<s.length()-1;

}

}