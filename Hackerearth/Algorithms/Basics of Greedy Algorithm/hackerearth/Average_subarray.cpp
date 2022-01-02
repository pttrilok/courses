//Ques Link-> https://www.hackerearth.com/problem/algorithm/average-subarray-7b376ebf/

#include<bits/stdc++.h>
using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		int n,k;
		cin>>n>>k;
		int arr[n];
		int sum=0 , ans=0;
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		for(int i=0;i<n;i++){
			if(arr[i]==0)
				sum=0;
			else{
				sum++;
				if(sum==k){
					ans+=1;
					sum=0;
				}
			}
		}
		cout<<ans<<endl;
	}
}
