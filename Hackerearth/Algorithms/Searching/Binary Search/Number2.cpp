//Ques Link -> https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/hp-and-numbers-ii-0115b16e/

#include <bits/stdc++.h>
#include<limits.h>
#define ll long long
using namespace std;

// Function to return
// gcd of a and b
ll gcd(ll a, ll b)
{
	if (a == 0)
		return b;

	return gcd(b % a, a);
}

// Function to calculate how many numbers
// from 1 to num are divisible by a or b
ll divTermCount(ll a, ll b, ll lcm, ll num)
{
	// calculate number of terms divisible by a and
	// by b then, remove the terms which is are
	// divisible by both a and b
	return num / a + num / b - num / lcm;
}

// Binary search to find the nth term
// divisible by a or b
ll findNthTerm(ll a, ll b, ll n)
{
	// set low to 1 and high to max(a, b)*n, here
	// we have taken high as 10^18
	ll low = 1, high = 1e18, mid;
	ll lcm = (a * b) / gcd(a, b);

	while (low < high) {
		mid = low + (high - low) / 2;

		// if the current term is less than
		// n then we need to increase low
		// to mid + 1
		if (divTermCount(a, b, lcm, mid) < n)
			low = mid + 1;

		// if current term is greater than equal to
		// n then high = mid
		else
			high = mid;
	}

	return high;
}

// Driver code
int main()
{
	ll t;
	cin>>t;
	while(t--){
	ll a , b, n;
	cin>>a>>b>>n;
	cout << findNthTerm(a, b, n) << endl;
	}
	return 0;
}
