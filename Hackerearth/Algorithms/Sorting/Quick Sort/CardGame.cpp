//Ques Link -> https://www.hackerearth.com/practice/algorithms/sorting/quick-sort/practice-problems/algorithm/card-game-1-44e9f4e7/

#include<iostream>
#include<algorithm>

using namespace std;
#define ll  long long

// A utility function to swap two elements 
void swap(ll* a, ll* b) 
{ 
    ll t = *a; 
    *a = *b; 
    *b = t; 
} 
  
/* This function takes last element as pivot, places 
the pivot element at its correct position in sorted 
array, and places all smaller (smaller than pivot) 
to left of pivot and all greater elements to right 
of pivot */
ll partition (ll arr[], ll low, ll high) 
{ 
    ll pivot = arr[high]; // pivot 
    ll i = (low - 1); // Index of smaller element and indicates the right position of pivot found so far
  
    for (ll j = low; j <= high - 1; j++) 
    { 
        // If current element is smaller than the pivot 
        if (arr[j] < pivot) 
        { 
            i++; // increment index of smaller element 
            swap(&arr[i], &arr[j]); 
        } 
    } 
    swap(&arr[i + 1], &arr[high]); 
    return (i + 1); 
} 
  
/* The main function that implements QuickSort 
arr[] --> Array to be sorted, 
low --> Starting index, 
high --> Ending index */
void quickSort(ll arr[], ll low, ll high) 
{ 
    if (low < high) 
    { 
        /* pi is partitioning index, arr[p] is now 
        at right place */
        ll pi = partition(arr, low, high); 
  
        // Separately sort elements before 
        // partition and after partition 
        quickSort(arr, low, pi - 1); 
        quickSort(arr, pi + 1, high); 
    } 
} 

int main()
{
	ll friend1;
	cin>>friend1;
	ll card1[friend1];
	for(ll i=0;i<friend1;i++)
	{
		cin>>card1[i];
	}
	ll friend2;
	cin>>friend2;
	ll card2[friend2];
	for(ll i=0;i<friend2;i++)
	{
		cin>>card2[i];
	}
	quickSort(card2,0,friend2-1);
	ll guarantee=card2[friend2-1]+1;
	//cout<<guarantee<<endl;
	ll money=0;
	for(ll i=0;i<friend1;i++)
	{
		ll diff=guarantee-card1[i];
		if(diff>0)
		money+=diff;
	}
	cout<<money;
	return 0;
}