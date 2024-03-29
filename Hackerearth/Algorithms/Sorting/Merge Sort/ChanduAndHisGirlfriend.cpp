//Ques Link -> https://www.hackerearth.com/practice/algorithms/sorting/merge-sort/practice-problems/algorithm/chandu-and-his-girlfriend/

#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <cmath>
#include <utility>
#include <vector>
#include <set>
 
using namespace std;
 
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define ll long long

void merge(ll arr[], ll p, ll q, ll r) {
  
  // Create L ← A[p..q] and M ← A[q+1..r]
  ll n1 = q - p + 1;
  ll n2 = r - q;

  ll L[n1]={0}, M[n2]={0};

  for (ll i = 0; i < n1; i++)
    L[i] = arr[p + i];
  for (ll j = 0; j < n2; j++)
    M[j] = arr[q + 1 + j];

  // Mallain current index of sub-arrays and main array
  ll i, j, k;
  i = 0;
  j = 0;
  k = p;

  // Until we reach either end of either L or M, pick larger among
  // elements L and M and place them in the correct position at A[p..r]
  while (i < n1 && j < n2) {
    if (L[i] >= M[j]) {
      arr[k] = L[i];
      i++;
    } else {
      arr[k] = M[j];
      j++;
    }
    k++;
  }

  // When we run out of elements in either L or M,
  // pick up the remaining elements and put in A[p..r]
  while (i < n1) {
    arr[k] = L[i];
    i++;
    k++;
  }

  while (j < n2) {
    arr[k] = M[j];
    j++;
    k++;
  }
}

// Divide the array llo two subarrays, sort them and merge them
void mergeSort(ll arr[], ll l, ll r) {
  if (l < r) {
    // m is the poll where the array is divided llo two subarrays
    ll m = l + (r - l) / 2;

    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);

    // Merge the sorted subarrays
    merge(arr, l, m, r);
  }
}

 
int main() {
	
	ll t;
	cin>>t;
	while (t--){

		ll n;
		cin>>n;

		ll a[n]={0};
		
		for (ll i = 0; i < n; i++){

			cin>>a[i];
		}
		mergeSort(a,0,n-1);
		//sort(a, a + n, greater<ll>());

		for (ll i = 0; i < n; i++){

			cout<<a[i]<<" ";
		}

		cout<<"\n";
	}

	return 0;
}