//https://www.hackerearth.com/practice/math/number-theory/basic-number-theory-2/practice-problems/algorithm/ashu-and-prime-factors-4/


#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
int main()
{
  int prime[1000001]={0};
  int count[1000001]={0};
    
  prime[1]=1;
   for(int i=2;i<=1000000;i++){
       if(prime[i]==0){
           
           for(int j=i*2;j<=1000000;j+=i){
               if(prime[j]==0){
               count[i]++;
               prime[j]=1;
               
               }
           }
       }
   }
    
  int t;
  cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<count[n]+1<<endl;
    }
    
}
