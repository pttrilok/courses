#include<iostream>
using namespace std;
#define ll long long
int main(){
	ll test;
	cin>>test;
	while(test--){
		ll arr[4][4]={0};
		ll col1=0,col2=0,col3=0;
		for(ll i=1;i<=3; i++){
			for(ll j=1;j<=3; j++){
				cin>>arr[i][j];
			}
		}

		for(ll i=1;i<=3; i++){
			for(ll j=1;j<=3; j++){
				if(j==1)
					col1 += arr[i][j];
				else if(j==2){
					col2 += arr[i][j];
				}
				else col3 += arr[i][j];
			}
		}
		//cout<<col3-col2<<endl;
		ll diff1=(col2-col1)/3;
		ll diff2=(col3-col2)/3;
		if((diff2)==(arr[1][3]-arr[1][2]) and (diff1)==arr[1][2]-arr[1][1])
			cout<<"YES"<<endl;
		else 
			cout<<"NO"<<endl;
	}
}