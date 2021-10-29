//Ques Link -> https://www.hackerearth.com/practice/algorithms/sorting/selection-sort/practice-problems/algorithm/old-keypad-in-a-foreign-land-24/

#include <bits/stdc++.h>
using namespace std;


int main(){

	int n;
	cin>>n;

	int a[n];

	for (int i = 0; i < n; i++){

		cin>>a[i];
	}

	sort(a, a + n, greater<int>());

	int k;
	cin>>k;

	vector<int> key;

	int keysize[k];
	int s = 0;
	for (int i = 0; i < k; i++){

		cin>>keysize[i];
		
		s += keysize[i];
		for (int j = 0; j < keysize[i]; j++){
			key.push_back(j + 1);
		}
	}

	if (s < n){
		cout<<"-1"<<endl;
		return 0;
	}
	sort(key.begin(), key.end());

	int x = 0;
	int ans = 0;

	for (int i = 0; i < n; i++){

		ans += (a[i] * key[i]);

	}

	cout<<ans<<endl;
}