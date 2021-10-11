//Question -> https://www.hackerearth.com/practice/algorithms/string-algorithm/string-searching/practice-problems/algorithm/common-prime-5a915755/

#include <bits/stdc++.h>
#include<algorithm>
#include<numeric>
#define ll long long
using namespace std;

long long GCD(long long a, long long b) 
{ 
    if (b == 0) 
        return a; 
    return GCD(b, a % b);  
      
} 

long long smallestDivisor(long long n)
{
	// if divisible by 2
	if (n % 2 == 0)
		return 2;

	// iterate from 3 to sqrt(n)
	for (long long i = 3; i * i <= n; i += 2) {
		if (n % i == 0)
			return i;
	}

	return n;
}



// Driver Code
int main()
{
    ll a, b;
    cin>>a>>b;
    
	ll n =GCD(a,b);
   if(n==1)
   {
      cout<<-1;
      exit(0);
   }
	else{
    ll ans=smallestDivisor(n);
    cout<<ans;
   }
	return 0;
}
