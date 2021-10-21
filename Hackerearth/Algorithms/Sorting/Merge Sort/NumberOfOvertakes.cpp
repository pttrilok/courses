//Ques Link-> https://www.hackerearth.com/practice/algorithms/sorting/merge-sort/practice-problems/algorithm/overtakes-count-33746e3a/

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
 
const int N = 2020;
#define ll long long
int n, L;
pair<int, int> a[N];

int _mergeSort(int arr[], int temp[], int left, int right);
int merge(int arr[], int temp[], int left, int mid,
          int right);

int mergeSort(int arr[], int array_size)
{
    int temp[array_size];
    return _mergeSort(arr, temp, 0, array_size - 1);
}
 

int _mergeSort(int arr[], int temp[], int left, int right)
{
    int mid, inv_count = 0;
    if (right > left) {

        mid = (right + left) / 2;
 

        inv_count += _mergeSort(arr, temp, left, mid);
        inv_count += _mergeSort(arr, temp, mid + 1, right);

        inv_count += merge(arr, temp, left, mid + 1, right);
    }
    return inv_count;
}

int merge(int arr[], int temp[], int left, int mid,
          int right)
{
    int i, j, k;
    int inv_count = 0;
 
    i = left; 
    j = mid; 
    k = left; 
    while ((i <= mid - 1) && (j <= right)) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        }
        else {
            temp[k++] = arr[j++];

            inv_count = inv_count + (mid - i);
        }
    }
 

    while (i <= mid - 1)
        temp[k++] = arr[i++];
 

    while (j <= right)
        temp[k++] = arr[j++];

    for (i = left; i <= right; i++)
        arr[i] = temp[i];
 
    return inv_count;
}
 
int main() {
	
	int n;
	cin>>n;
	int vel[n], pos[n], ans[n];

	for (int i = 0; i < n; i++){
		cin>>vel[i];
	}

	for (int i = 0; i < n; i++){

		cin>>pos[i];
	}

	for (int i = 0; i < n; i++){

		ans[pos[i] - 1] = vel[i];
	}

	int cnt = mergeSort(ans, n);
	cout<<cnt<<endl;
	return 0;
}