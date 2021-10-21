//Ques Link-> https://www.hackerearth.com/practice/algorithms/sorting/merge-sort/practice-problems/algorithm/pro-and-con-list/

#include<bits/stdc++.h>

using namespace std;

#define ll long long

void merge(ll arr[], ll p, ll q, ll r) {
  
  // Create L ← A[p..q] and M ← A[q+1..r]
  ll n1 = q - p + 1;
  ll n2 = r - q;

  ll L[n1], M[n2];

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

int main()

{

    ll t;
	cin>>t;

	while (t--){

		ll n;
		cin>>n;

		ll fav[n], anger[n];
		ll ans[n];
		ll total_anger = 0;

		for (ll i = 0; i < n; i++){

			cin>>fav[i]>>anger[i];
			ans[i] = fav[i] + anger[i];
			total_anger += anger[i];

		}

		//sort(ans.rbegin(), ans.rend());
		mergeSort(ans,0,n-1);
		cout<<ans[0] + ans[1] - total_anger<<endl;


	}


}