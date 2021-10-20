//Ques Link -> https://www.hackerearth.com/practice/algorithms/sorting/merge-sort/practice-problems/algorithm/alice-and-marks-hsbc-b18d5d01/

#include<bits/stdc++.h>

#define ll long long



using namespace std;

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
    if (L[i] <= M[j]) {
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

    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    cout.tie(NULL);

    

    ll tc,n,i,x,h;

    

    cin>>tc;

    while(tc--){

        cin>>n>>h;

        ll arr[n+1];

        for(i=0;i<n;i++) 
        cin>>arr[i];

        arr[n]=h;
        mergeSort(arr,0,n);

        for(i=0;i<n+1;i++){

            if(arr[i] == h) {

                x=i; break;

            }

        }

        if(x==0){

            cout<<n<<'\n';

        }

        else{

            cout<<abs(x-(n-x))<<'\n';

        }

    }

    return 0;

}