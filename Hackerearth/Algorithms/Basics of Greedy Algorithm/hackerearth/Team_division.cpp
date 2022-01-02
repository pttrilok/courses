#include<iostream>
#include<algorithm>
using namespace std;
#define ll long long

int main(){
	ll test;
	cin>>test;
	while(test--){
		ll n;
		cin>>n;
		ll arr[n]={0};
		for(ll i=0;i<n;i++){
			cin>>arr[i];
		}
		sort(arr,arr+n);
		//cout<<(n/2)<<endl;
		ll ans=(arr[(n/2)]-arr[(n)/2 -1] )+1;
		cout<<ans<<endl;
	}
}
