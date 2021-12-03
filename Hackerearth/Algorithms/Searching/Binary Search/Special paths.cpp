//https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/special-path-b3ac37d0/

#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int parent[100001];
int size[100001];

int par(int u)
{
    while(u != parent[u])
    {
        u = parent[u];
    }
    return u;
} 

void merge(int u, int v)
{
    if(size[u] < size[v])
    {
        parent[u] = v;
        size[v] += size[u];
    }
    else
    {
        parent[v] = u;
        size[u] += size[v];
    }
}



int main(){
    
int n, m;
    cin >> n >> m;
    vector<pair<int,int> >edge;
    for(int i = 1 ; i <= m ; i++)
    {
        int u,v;
        cin>>u>>v;
        edge.push_back({u,v});
    }

    int value[n+1];
    for(int i = 1 ; i <= n ; i++){
        cin >> value[i];
    }

    int start, end;
    cin>>start>>end;

    int s = 1;
    int e = 1000000;
    int ans = -1;

    while(s <= e)
    {
        
        int mid = (s + e) >> 1;
        for(int i=1;i<= n;i++)
        {
            parent[i]=i;
            size[i]=1;
        }

        for(int i=0;i<m;i++)
        {
            int u=edge[i].first;
            int v=edge[i].second;
            int pu=par(u);
            int pv=par(v);

            int val=abs(value[u] - value[v]);

            if(val>mid)
            continue; 

            if(pu != pv){
                merge(pu,pv);
            }
        }

        if(par(start)==par(end))
        {
            ans=mid;
            e=mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }

    cout << ans << endl;
}
