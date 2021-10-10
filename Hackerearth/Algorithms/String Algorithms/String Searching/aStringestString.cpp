//Question -> https://www.hackerearth.com/practice/algorithms/string-algorithm/string-searching/practice-problems/algorithm/strongest-string-4103a929/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int test;
	cin>>test;
	while(test--)
	{
		int n;
		cin>>n;
		string s , res="";
		cin>>s;
		int pos=0;
		for (int i='z';i>='a';i--)
		{
			for (int j=pos;j<n;j++)
			{
					if (s[j]==i)
					{
						res+=i;
						pos=j+1;
						break;
					}
			
			}
			

		}
		cout<<res<<endl;
	}
		return 0;
}