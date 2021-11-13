//Ques Link -> https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/smallest-substring-e1862fcf/

#include<bits/stdc++.h>

using namespace std;

int check(int f[30], int mx){
	int temp = 0;
	for(int i=0; i<26; i++)if(f[i])temp++;
	return (temp==mx);
}

int main(){
	string str = ""; cin>>str;
	int n = str.length();
	int dist[30] = {0};
	for(int i=0; i<n; i++)
		dist[str[i]-'a'] = 1;
	int mx = 0;
	int ans = 1;
	for(int i=0; i<26; i++)mx += dist[i];
	int low = 1, high = n;
	while(low <= high){
		int mid = (low+high)/2;
		int f[30]={0}, flag = 0;
		for(int i=0; i<mid; i++)f[str[i]-'a']++;
		for(int j=1; j<=n-mid; j++){
			if(check(f, mx)){
				flag = 1; break;
			}
			f[str[j-1]-'a']--;
			f[str[j+mid-1]-'a']++;
		}
		if(check(f, mx))flag = 1;
		if(flag){
			ans = mid;
			high = mid-1;
		}
		else low = mid+1;
	}
	cout<<ans<<endl;
	return 0;
}