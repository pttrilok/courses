//Question Link -> https://www.hackerearth.com/practice/algorithms/sorting/bubble-sort/practice-problems/algorithm/shubham-and-xor-8526868e/
#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main(){

    int n;cin>>n;

    ll A[n],k = 0,sum = 0;

    for(int i = 0; i<n; i++)cin>>A[i];

    sort(A,A+n);

    for(int i = 0; i<n-1; i++){

        k = 1;

        while(A[i]==A[i+1]&&i<n-1){

            k++;

            i++;

        }

        sum+=(k*(k-1))/2;

    }

    cout<<sum<<endl;    

    return 0;

}