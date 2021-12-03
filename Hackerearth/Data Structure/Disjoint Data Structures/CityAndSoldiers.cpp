//Ques -> https://www.hackerearth.com/practice/data-structures/disjoint-data-strutures/basics-of-disjoint-data-structures/practice-problems/algorithm/city-and-soldiers/

#include<bits/stdc++.h>
using namespace std;
int par[100001];
int find_set(int a){
if(par[a]==a)
	return a;
return par[a]=find_set(par[a]);
}

void union_set(int a,int b){
	par[a]=b;
}

int main(){
	int n,Query;
	cin>>n>>Query;
	for(int i=1;i<=n;i++)
		par[i]=i;
	while(Query--)
	{
		int type;
		cin>>type;
		if(type==1)
		{
			int a,b;
			cin>>a>>b;
			a=find_set(a),b=find_set(b);
			if(a!=b)
			union_set(a,b);
		}
		else if(type==2)
		{
			int a;
			cin>>a;
			int k=find_set(a);
			par[k]=a;
			par[a]=a;  
		}
		else
		{
			int a;
			cin>>a;
			cout<<find_set(a)<<endl;
		}
	}
}