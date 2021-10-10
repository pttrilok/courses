//Question -> https://www.hackerearth.com/practice/algorithms/string-algorithm/string-searching/practice-problems/algorithm/string-4-d1093b86/

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
    cout << n-(*max_element(cnt, cnt+30)) << "\n";
}
