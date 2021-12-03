//Ques -> https://www.hackerearth.com/practice/data-structures/disjoint-data-strutures/basics-of-disjoint-data-structures/practice-problems/algorithm/reunion-of-1s-1b5bd063/

#include<bits/stdc++.h>
using namespace std;
int n,k,max_len;
int parent[100005],sz[100005];

int find_set(int x)
{
    if(x==parent[x])
		return parent[x];
    return parent[x]=find_set(parent[x]);
}
void union_set(int a,int b)
{
    int u=find_set(a);
    int v=find_set(b);
    if(u==v)return;
    if(sz[u]<sz[v])
    {
        parent[u]=v;
        sz[v]+=sz[u];
        max_len=max(max_len,sz[v]);
    }
    else
    {
        parent[v]=u;
        sz[u]+=sz[v];
        max_len=max(max_len,sz[u]);
    }
}
int main()
{
    cin>>n>>k;
    string s;
    cin>>s;
	s="0"+s;
    for(int i=1;i<=n;i++)
    {
        if(s[i]=='1')
        {
            sz[i]=1;
			parent[i]=i;
			if(s[i-1]=='1')union_set(i-1,i);
        }
    }
   
    while(k--)
    {
        int type;
        cin>>type;
        if(type==1)cout<<max_len<<endl;
        else
        {
            int pos;
            cin>>pos;
            if(s[pos]=='1')
				continue;
            s[pos]='1';
			sz[pos]=1;
			parent[pos]=pos;
			max_len=max(max_len,1);
            if(s[pos-1]=='1'){
				union_set(pos-1,pos);
			}
            if(s[pos+1]=='1')union_set(pos,pos+1);
        }
    }
    return 0;
}