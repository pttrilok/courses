//Ques -> https://www.hackerearth.com/practice/data-structures/disjoint-data-strutures/basics-of-disjoint-data-structures/practice-problems/algorithm/website-0317dd3a/

#include<bits/stdc++.h>
using namespace std;

int find_set(int x,vector<pair<int,int>>& parent)
{
	if(parent[x].first==x){
		return x;
	}

	return  find_set(parent[x].first,parent);
}

bool union_set(int x,int y, vector<pair<int,int>>& parent)
{
	int a = find_set(x,parent);
	int b = find_set(y,parent);

	if(a==b){
		return false;
	}
	else{
		if(parent[a].second<parent[b].second)
			swap(a,b);
		parent[a].second++;
		parent[b].first=a;
	}
	return true;
}

signed main()
{	
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		// {parent,rank}
		vector<pair<int,int>> parent;
		for(int i=0;i<2*n;i++){
			parent.push_back({i,0});
		}

		int ind = 0,ans=0;
		map<string,int> index;
		for(int i=0;i<n;i++){
			string A,B;
			cin>>A>>B;
			if(index.find(A)==index.end()){
				index[A] = ind++;
			}

			if(index.find(B)==index.end()){
				index[B] = ind++;
			}
			

			if(A==B){
				continue;
			}
			ans++;
			if(!union_set(index[A],index[B],parent)){
				ans++;
			}
		}
		cout<<ans<<endl;
	}
	
}