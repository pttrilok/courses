//Ques Link -> https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/the-graphic-game-59c30775/

#include<bits/stdc++.h>
 
using namespace std;
 
#define ll long long
 
#define mod 1000000007
 
int main(){
 
    ios_base::sync_with_stdio(0);
 
    cin.tie(0);
 
    int n,q;cin>>n>>q;
 
    int A[1000000];
 
    vector<int>v[1000000];
 
    for(int i = 0; i<n; i++)cin>>A[i];
 
    for(int i = n; i<2*n; i++)A[i] = A[i-n];
 
    for(int i = 0; i<2*n; i++)v[A[i]].push_back(i);
 
    while(q--){
 
        int minn = 200000;
 
        int a,b;cin>>a>>b;
 
        for(int i = 0; i<v[a].size(); i++){
 
            int l = 0,h = v[b].size();
 
            while(l<h){
 
                int mid = l+(h-l)/2;
 
                if(v[b][mid]<=v[a][i]){
 
                    l = mid+1;
 
                }
 
                else h = mid;
 
            }
 
            minn = min(minn,abs(v[b][h]-v[a][i]));
 
            if(h!=0){
 
                minn = min(minn,abs(v[a][i]-v[b][h-1]));
                
            }
 
       }
 
        cout<<minn/2<<endl;
 
    }
 
    return 0;
 
}