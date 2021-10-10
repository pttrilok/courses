//Question -> https://www.hackerearth.com/practice/algorithms/string-algorithm/string-searching/practice-problems/algorithm/minimum-rotations-8d545eb1/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 500 + 14;
 
 
int main(){
	ios::sync_with_stdio(0), cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		int n, f, k;
		char c;
		string s;
		cin >> n >> f >> k >> c >> s;
		assert(f <= k && k <= n);
		for(int i = 0; i < k; i++)
			if(s[i] == c)
				f--;
		if(f <= 0){
			cout << "0\n";
			continue;
		}
		bool ok = 0;
		for(int i = n - 1; !ok && i >= 0; i--){
			if(s[(i + k) % n] == c)
				f++;
			if(s[i] == c)
				f--;
			if(f <= 0){
				cout << n - i << '\n';
				ok = 1;
			}
		}
		if(!ok)
			cout << "-1\n";
	}
}