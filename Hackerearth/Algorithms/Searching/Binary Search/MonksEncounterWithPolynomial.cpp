//Question -> https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/monks-encounter-with-polynomial/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	int test;
	cin>>test;
	while(test--)
	{
		ll A,B,C,K;
		cin>>A>>B>>C>>K;
		ll lb=0, ub =100000;
		ll ans = -1;
		while(lb<=ub)
		{
			ll mid = (lb+ub)/2;
			ll val = A*(mid*mid) + B*mid + C;
			if(val >= K){
				ans = mid;
				ub = mid-1;
			}
			else
				lb = mid+1;
		}
		cout<<ans<<endl;
	}
	return 0;
}