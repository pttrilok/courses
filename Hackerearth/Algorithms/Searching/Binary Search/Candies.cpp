//Question -> https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/palindromic-substring-2-a3d45c46/editorial/

#include <bits/stdc++.h>
using namespace std;

bool check(int arr[],int k)
{
	int flag=0;
	int val=0;
	for(int i=0;i<26;i++)
	{
		if(arr[i]==0)
		{
			continue;
		}
		else if(arr[i]==1)
		{
			flag=1;
		}
		else
		{
			if(arr[i]&1)
			flag=1;
			val+=arr[i]/2;
		}
	}
	if(k&1)
	{
		if(2*val+flag>=k)
		return true;
	}
	else
	{
		if(2*val>=k)
		return true;
	}
	return false;
}
bool fun(string s, int x, int k)
{
	int fre[26]={0};
	for(int i=0;i<x;i++)
	{
		fre[s[i]-'a']++;
	}
	if(check(fre,k))
	return true;
	for(int i=x;i<s.length();i++)
	{
		fre[s[i-x]-'a']--;
		fre[s[i]-'a']++;
		if(check(fre,k))
	    return true;
	}
	return false;
}
int main()
{
	string s;
	cin>>s;
	int t;
	cin>>t;
	while(t--)
	{
		int k;
		cin>>k;
		int lo,mid,hi;
		int ans=-1;
		lo=k;
		hi=s.length();
		while(hi-lo>=0)
		{
			mid = (lo+hi)/2;
			if(fun(s,mid,k))
			{
				ans=mid;
				hi=mid-1;
			}
			else
			{
				lo=mid+1;
			}
		}
		cout<<ans<<"\n";
	}
	return 0;
}