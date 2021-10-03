//https://www.hackerearth.com/practice/math/number-theory/basic-number-theory-1/practice-problems/algorithm/the-confused-monk/

#include<bits/stdc++.h>
using namespace std;
int gcd(long long int a,long long int b)
{
if(a==0)
return b;
return gcd(b%a,a);
}
int findGCD(long long int arr[],long long int n){

int result=arr[0];

for(int i=1;i<n;i++)

{

result=gcd(arr[i],result);

if(result==1)
{
return 1;
}
}
 return result;
}
long long int exponentiation(long long int prod,long long int y){
long long int resultt=1;
long long M=1000000007;
while(y>0)
{
if(y%2==1)
resultt=(resultt*prod)%M;
prod=(prod*prod)%M;
y=y/2;
}
return resultt;
}
int main() {
long long int n;
long long int M=1000000007;
cin>>n;
long long int i;
long long int y;
long long int arr[n];
long long int prod=1,ans;
for(i=0;i<n;i++){
cin>>arr[i];
}
for(i=0;i<n;i++)
prod=(prod%M*arr[i]%M)%M;
y=findGCD(arr,n);
ans=exponentiation(prod,y);
cout<<ans;

}
