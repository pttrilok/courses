//https://www.hackerearth.com/practice/math/number-theory/basic-number-theory-2/practice-problems/algorithm/zrzr/


#include<bits/stdc++.h>
#include <iostream>
int fac(int n){

}

using namespace std;

int main() {
int t;
cin >> t;

while(t--)
{
long long n;
cin >> n;
long long x = 1;
long long ans = 0;
long long prime = pow(5, x);

while(n/prime>0)
{
ans += n/prime;
x++;
prime = pow(5,x);
}
cout << ans << endl;
}

}



