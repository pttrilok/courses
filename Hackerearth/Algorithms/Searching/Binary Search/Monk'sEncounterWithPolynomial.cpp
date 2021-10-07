/*Problem
Our monk, while taking a stroll in the park, stumped upon a polynomial ( A X2 + B X +C ) lying on the ground. The polynomial was dying! Being considerate, our monk tried to talk and revive the polynomial. The polynomial said:
I have served my purpose, and shall not live anymore. Please fulfill my dying wish. Find me the least non-negative integer Xo, that shall make my value atleast K i.e., A Xo2 + B Xo + C >= K .

Help our Monk fulfill the polynomial's dying wish!


Input:
The first line contains an integer T. T test cases follow.
Each test case consists of four space-separated integers A, B, C and K.

Output:
For each test case, output the answer in a new line.

Constraints:
1 ≤ T ≤ 105
1 ≤ A,B,C ≤ 105
1 ≤ K ≤ 1010

Sample Input
3
3 4 5 6
3 4 5 5
3 4 5 150
Sample Output
1
0
7


Approach  :
    Now when we take a look at the constraints of K, 
    which is 10 10, in the worst case possible, our answer will not be greater than 105 anyway. 
    So that will be our upper limit for searching. The lower limit for our searching will be 0.

Now, we can binary search on the two limits and keep updating the value of mid, 
according to the value of the polynomial we find by plugging in the value of the mid in the polynomial. 
The moment we reach where the lowerLimit <= upperLimit, we break our binary search and the mid obtained 
then is our answer!

*/

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