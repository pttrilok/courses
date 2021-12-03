//https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/trial/

#include<bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define all(v) v.begin(),v.end()

using namespace std;
vector<int> has[2002];

ll search(int l,int r,int x){

  ll k1= upper_bound(all(has[x]),r)-has[x].begin();
  ll k2=lower_bound(all(has[x]),l)-has[x].begin();
  return (k1-k2)>0?(k1-k2):0;
}

int main(){
 
  int n,q;
  cin>>n>>q;
  int a[n];
  for (int i = 0; i < n; ++i)
  {
     cin>>a[i];
     has[a[i]].push_back(i);
  }

  while(q--) {
      int l,r,x;
      cin>>l>>r>>x;
      ll ans=0;
      l--;
      r--;
      for (int i = 1; i <=x ; ++i){
        ll aa=0;
        if(i==(x-i)){
            ll v= search(l,r,i);
            aa += v*(v-1);
        }else{
            aa=search(l,r,i)*search(l,r,x-i);
        }
        ans+=aa;
      }
      cout<<ans/2<<endl;
  }
}
