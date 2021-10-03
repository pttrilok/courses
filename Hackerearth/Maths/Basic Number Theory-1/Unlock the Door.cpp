//https://www.hackerearth.com/practice/math/number-theory/basic-number-theory-1/practice-problems/algorithm/name-count/

#include<bits/stdc++.h>
#include <iostream>
#define mod 1000000007
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
	int n,k;
	cin>>n>>k;
	long long password=1;
	while(n--){
      password=(password*k)%mod;
	k=k-1;
	}
	
       cout<<password<<endl;
}


}

