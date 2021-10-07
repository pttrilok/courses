//Question -> https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/highest-average-64bdd761/

#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    assert(n>=1 && n<=500000);
    int arr[n+1];
    arr[0]=0;
    for(int i=1;i<=n;i++) { cin>>arr[i]; assert(n>=1 && n<=1000000000); }
    sort(arr+1,arr+n+1);
    long prefix[n+1];
    prefix[0]=0;
    for(int i=1;i<=n;i++){
        prefix[i]=prefix[i-1]+arr[i];
    }
    vector<double> ar;
    for(int i=1;i<=n;i++) ar.push_back(prefix[i]/double(i));
    int q;
    cin>>q;
    assert(q>=1 && q<=500000);
    while(q--){
        long k;
        cin>>k;
        assert(k>=1 && k<=1000000000);
        int idx=lower_bound(ar.begin(),ar.end(),k)-ar.begin();
        cout<<idx<<"\n";
    }
    return 0;
}