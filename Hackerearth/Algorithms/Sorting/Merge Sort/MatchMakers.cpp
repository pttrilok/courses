//Question Link -> https://www.hackerearth.com/practice/algorithms/sorting/merge-sort/practice-problems/algorithm/match-makers/

#include<iostream>
using namespace std;

void merge(int arr[], int p, int q, int r, bool comp) {
  
  // Create L ← A[p..q] and M ← A[q+1..r]
  int n1 = q - p + 1;
  int n2 = r - q;

  int L[n1], M[n2];

  for (int i = 0; i < n1; i++)
    L[i] = arr[p + i];
  for (int j = 0; j < n2; j++)
    M[j] = arr[q + 1 + j];

  // Maintain current index of sub-arrays and main array
  int i, j, k;
  i = 0;
  j = 0;
  k = p;

  // Until we reach either end of either L or M, pick larger among
  // elements L and M and place them in the correct position at A[p..r]
  if(comp){
  while (i < n1 && j < n2 ) {
    if (L[i] <= M[j]) {
      arr[k] = L[i];
      i++;
    } else {
      arr[k] = M[j];
      j++;
    }
    k++;
  }
  }
  else{
	  while (i < n1 && j < n2 ) {
    if (L[i] >= M[j]) {
      arr[k] = L[i];
      i++;
    } else {
      arr[k] = M[j];
      j++;
    }
    k++;
  }
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

// Divide the array into two subarrays, sort them and merge them
void mergeSort(int arr[], int l, int r,bool comp) {
  if (l < r) {
    // m is the point where the array is divided into two subarrays
    int m = l + (r - l) / 2;

    mergeSort(arr, l, m,comp);
    mergeSort(arr, m + 1, r,comp);

    // Merge the sorted subarrays
    merge(arr, l, m, r,comp);
  }
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n]={0}, b[n]={0};
		for(int i=0;i<n;i++)
		cin>>a[i];
		for(int i=0;i<n;i++)
		cin>>b[i];
		bool comp=true;
		mergeSort(a,0,n-1,comp);
		comp=false;
		mergeSort(b,0,n-1,comp);
		
		
		/*for(int i=0;i<n;i++)
		{
			cout<<b[i]<<endl;
		}*/
		int count=0;
		for(int i=0;i<n;i++)
		{
			if(a[i]%b[i]==0 or b[i]%a[i]==0)
			{
				
				count++;
			}
		}
		cout<<count<<endl;
	}
	return 0;
}