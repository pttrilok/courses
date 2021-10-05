//Question-> https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/string-division/ 

#include<bits/stdc++.h>
using namespace std;
 
// Return if the given string can be split or not.
bool check(string s)
{
	// We can always break a string of size 10 or
	// more into four distinct strings.
	if (s.size() >= 10)
		return true;
 
	// Brute Force
	for (int i =1; i < s.size(); i++)
	{
		for (int j = i + 1; j < s.size(); j++)
		{
			for (int k = j + 1; k < s.size(); k++)
			{
				// Making 4 string from the given string
				string s1 = s.substr(0, i);
				string s2 = s.substr(i, j - i);
				string s3 = s.substr(j, k - j);
				string s4 = s.substr(k, s.size() - k);
 
				// Checking if they are distinct or not.
				if (s1 != s2 && s1 != s3 && s1 != s4 &&
						s2 != s3 && s2 != s4 && s3 != s4)
					return true;
			}
		}
	}
 
	return false;
}
 
// Driven Program
int main()
{
	int test;
	cin>>test;
	while(test--)
	{
	string str ;
	cin>>str;
	(check(str))? (cout << "YES" << endl):
				(cout << "NO" << endl);
	}
	return 0;
}