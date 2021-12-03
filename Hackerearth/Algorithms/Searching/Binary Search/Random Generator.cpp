//https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/random-generator/

#include <bits/stdc++.h>

using namespace std;
 

int main(){
	int t;
    cin>>t;
    while(t--){
	int n,i,k,p,j;
	vector<int>v;
	cin>>n>>k>>p;
	for(i=0;i<n;i++){
		cin>>j;
		v.push_back(j);
	}
	sort(v.begin(),v.end());
	for(i=0;i<n;i++){
		int id1=lower_bound(v.begin(),v.end(),v[i]-2*p)-v.begin();
		if(i-id1+1>=k){
			cout<<"NO"<<endl;
			break;
		}
	}
	if(i==n)
	cout<<"YES"<<endl;
	
}

	

	return 0;
}
