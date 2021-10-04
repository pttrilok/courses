//Question Link -> https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/contest-bw-sonika-and-rishika-216a7b6d/

#include<iostream>
#define ll long long
using namespace std;
 
ll xnor(ll a, ll b)
{
 
    if (a < b)
        swap(a, b);
 
    if (a == 0 && b == 0){
        return 1;
	}
 
    ll a_rem = 0; 
    ll b_rem = 0; 
 
 
    ll count = 0;
    ll ans = 0;
 
    while (a)
    {
        a_rem = a & 1;
 
        b_rem = b & 1;
 
        if (a_rem == b_rem){
            ans |= (1 << count);
		}	
 
        count++;
        a = a >> 1;
        b = b >> 1;
    }
    return ans;
}
 
int main(){
	int t;
	cin >> t;
	while(t--){
		ll a, b, n;
		cin >> a >> b >> n;
		ll c1 = a ^ b;
		ll c2 = xnor(a, b);
 
		n = n % 3;
 
		if(n == 0){
			cout << max(c1, c2) << endl;
		}
		else if(n == 1){
			cout << a << endl;
		}
		else{
			cout << b << endl;
		}
	}
	
}