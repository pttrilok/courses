//QUESTION -> https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/special-substrings-9fb5dbe8/

#include<iostream>
#include<string.h>
#define ll long long
using namespace std;
 
ll SpecialsubStr(string str){
	ll ans=str.length();
	for (ll i=0;i<str.length();i++)
	{
		ll repeat=0;
		while(i+1<str.length() and str[i]==str[i+1])
		{
			repeat++;
			i++;
		}
		ans+=(repeat*(repeat+1))/2;
 
		ll poller=1;
		while(i-poller>=0 and i+poller<str.length() and str[i+poller]==str[i-1] and str[i-poller]==str[i-1])
		{
			ans++;
			poller++;
		}
 
	}
	return ans;
}
 
int main(){
	string s;
	cin>>s;
	cout<<SpecialsubStr(s);
	return 0;
}