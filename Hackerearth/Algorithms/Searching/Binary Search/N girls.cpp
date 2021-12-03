//https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/n-girls-bbd50a1d/

#include<bits/stdc++.h>
using namespace std;

const int maxn = 2e5 + 20;

int a[maxn];
long long max(long long x, long long y){return (x > y ? x : y);}
long long min(long long x, long long y){return (x < y ? x : y);}

using namespace std;
int main() 
{ 
    
    int n, k;
    long double p, q;
    cin >> n >> k >> p >> q;
   
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    long long ans = 0;
    for(int i = n - 1; i >= 0; i--)
    {
        long double x = (a[i] * q) / p;
        int ind = lower_bound(a, a + n, x) - a;
        ind = min(ind, i);
        int tmp = max(0, ind - k);
        ans = max(ans, i + 1 - tmp);
    }
    cout << ans << endl;
}
