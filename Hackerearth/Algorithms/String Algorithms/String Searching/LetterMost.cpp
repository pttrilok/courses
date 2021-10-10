//Question -> https://www.hackerearth.com/practice/algorithms/string-algorithm/string-searching/practice-problems/algorithm/letter-most-fb72d803/

#include<bits/stdc++.h>
using namespace std;

typedef pair<int, int> ii;
typedef long long ll;

signed main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
    int n;cin >> n;
    string s;cin >> s;
    int cnt[30] = {};
    for(auto c : s)
        cnt[c - 'a'] ++;
    cout << *max_element(cnt, cnt+30) << "\n";
}
