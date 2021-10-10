//Question -> https://www.hackerearth.com/practice/algorithms/string-algorithm/string-searching/practice-problems/algorithm/solitary-string/

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;

    int firstPos[50], res = -1;
    for(char q = 'a'; q <= 'z'; ++q)
        firstPos[q - 'a'] = -1;

    for(int i = 0; i < s.size(); ++i)
        if(firstPos[s[i] - 'a'] == -1)
            firstPos[s[i] - 'a'] = i;
        else
            res = max(res, i - firstPos[s[i] - 'a'] - 1);

    cout << res << '\n';
}

int main()
{
    int t;
    cin >> t;

    while(t --> 0)
        solve();
}