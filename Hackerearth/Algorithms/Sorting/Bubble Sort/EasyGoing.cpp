//Question Link -> https://www.hackerearth.com/practice/algorithms/sorting/bubble-sort/practice-problems/algorithm/min-max-difference/
#include<iostream>
using namespace std;

void bubble_sort( int A[ ], int n ) {
    int temp;
    for(int k = 0; k< n-1; k++) {
        // (n-k-1) is for ignoring comparisons of elements which have already been compared in earlier iterations

        for(int i = 0; i < n-k-1; i++) {
            if(A[ i ] > A[ i+1] ) {
                // here swapping of positions is being done.
                temp = A[ i ];
                A[ i ] = A[ i+1 ];
                A[ i + 1] = temp;
            }
        }
    }
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,m;
	cin>>n>>m;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	bubble_sort(arr,n);
	int min_sum=0, max_sum=0;
	for(int i=0;i<n-m;i++)
	{
	min_sum+=arr[i];	
	}
	int rep=n-m;
	int idx=n-1;
	while(rep--)
	{
		max_sum+=arr[idx];
		idx--;
	}
	cout<<max_sum-min_sum<<endl;
	}
	return 0;
}