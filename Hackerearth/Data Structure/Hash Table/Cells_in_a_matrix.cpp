//Ques Link -> https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/easy-23-6031def9/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main() {
   int n, k;
   cin>>n>>k;
   set<int> row , col ;
   while(k--) {
      int i, j;
      cin >> i >> j;
	  row.insert(i) ; 
	  col.insert(j) ;
   	  ll ans= ( n - row.size() ) * ( n - col.size() ) ; 
      cout<< ans << ' ';
   }
   return 0;
}