//https://www.hackerearth.com/practice/data-structures/disjoint-data-strutures/basics-of-disjoint-data-structures/practice-problems/algorithm/city-and-flood-1/


#include <iostream>
#include<bits/stdc++.h>
using ll = long long int;
using namespace std;
int par[200002];
int sze[200002];
 
void init(int n){
	for(int i=1;i<=n;i++){
		par[i] = i;
		sze[i] = 1;
	}
}
 
int find(int n){
	if(par[n]==n) return n;
	else return par[n]=find(par[n]);
}
 
void union_(int a, int b){
	int pa = find(a);
	int pb = find(b);
 
	if(pa==pb) return;
	if(sze[pa]>sze[pb])
	{
		par[pb] = pa;
		sze[pa]+=sze[pb];
	}
	else
	{
		par[pa] = pb;
		sze[pb]+=sze[pa];
	}
}

int main() {
int n;
cin>>n;
int k;
cin>>k;

init(n);
for(int i=0;i<k;i++){
	int a,b;
	cin>>a>>b;

	par[b]=0;
}
int o=0;
for(int i=1;i<=n;i++){
if(par[i]!=0)
o++;
}
cout<<o<<endl;
}
