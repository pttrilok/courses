//Question Link -> https://www.hackerearth.com/practice/algorithms/sorting/bubble-sort/practice-problems/algorithm/the-best-player-1/

#include<iostream>
#include<bits/stdc++.h>
#include<vector>

using namespace std;


bool comp(pair<string,int>v1, pair<string, int> v2)
{
	if(v1.second==v2.second)
		return v1.first<v2.first;

	return v1.second>v2.second;	
}



int main()
{
	int test, T;
	cin>>test>>T;
	vector<pair<string,int>>v(test);
	string name;
	int fanQ;
	while(test--)
	{
		
		cin>>name>>fanQ;
		v.push_back(make_pair(name,fanQ));
	}
	sort(v.begin(),v.end(),comp);
	for(int i=0;i<T;i++)
	{
		cout<<v[i].first<<endl;
	}
return 0;
}