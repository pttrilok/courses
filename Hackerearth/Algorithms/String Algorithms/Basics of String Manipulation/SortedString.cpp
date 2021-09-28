//QUESTION -> https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/sorted-string/


#include <bits/stdc++.h>
using namespace std;
#define f_in(st) freopen(st,"r",stdin);
#define f_out(st) freopen(st,"w",stdout);
int main()
{
	//f_in("in09.txt");
	//f_out("out09.txt");
	int test;
	cin>>test;
	while(test--)
	{	
		string s;
		cin>>s;
		vector<pair<int, int> > V(26);
		for(int i=0;i<26;i++){
			V[i].first=0;
			V[i].second=i;
		}
		for(int i=0;i<s.size();i++)
			V[s[i]-'a'].first++;
		sort(V.begin(),V.end());
		for(int i=0;i<26;i++)
		{
			int count=V[i].first;
			char ch=V[i].second+'a';
			for(int j=0;j<count;j++)
				cout<<ch;
		}
		cout<<endl;
	}
	return 0;
}