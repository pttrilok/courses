//https://www.hackerearth.com/practice/math/number-theory/basic-number-theory-1/practice-problems/algorithm/connected-components-1/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define MAX_N 100000
#define MOD 1000000007		
long fac[MAX_N+1], invFac[MAX_N+1];
 
long long power(long long x, unsigned int y, int p)
{
    long long res = 1;   
    x = x % p; 
    if (x == 0) return 0;
    while (y > 0)
    {
        if (y & 1)
            res = (res*x) % p;
        y = y>>1; 
        x = (x*x) % p;
    }
    return res;
}
long inv(int a)
{
        long res;
         res=   power(a, MOD - 2, MOD);
    return res;
}
 
void makeBinom()
{
	long long n;
 
	fac[0] = invFac[0] = 1;
	for(n = 1; n <= MAX_N; n++)
	{
		fac[n] = (n * fac[n-1]) % MOD;
		invFac[n] = inv(fac[n]);
	}
	
}
 
long mult(long long a, long long b)
{
	return (a * b) % MOD;
}
 
long binom(long n, long k)
{
	long res;
 
	if(k > n)
		return 0;
	res = mult(fac[n], invFac[k]);
	res = mult(res, invFac[n-k]);
	return res;
}
 
int main()
{
	int T;
	long res, N, M, C;
 
	makeBinom();
	scanf("%d", &T);
	while(T--)
	{
		scanf("%ld %ld %ld", &N, &M, &C);
		if(N==M)
			res = (C==0)?1:0;
		else
			res = mult(binom(N-M-1, C-1), binom(M+1, C));
		printf("%ld\n", res);
	}
	return 0;
}
