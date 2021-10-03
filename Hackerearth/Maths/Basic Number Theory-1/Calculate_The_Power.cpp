//https://www.hackerearth.com/practice/math/number-theory/basic-number-theory-1/practice-problems/algorithm/calculate-the-power/

#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define mod 1000000007

int pow(lli a,lli b,lli m){
    if(b==0)
        return 1;
    if(b%2==0)
        return pow((a*a)%m,b/2,m)%m;
    return a*(pow((a*a)%m,(b-1)/2,m)%m)%m;
}

int main()
{
    
    lli c;
    lli d;
    lli m=1000000007;
    cin>>c>>d;
    lli x=pow(c,d,m);
    cout<<x<<endl;
	
	return 0;
}
