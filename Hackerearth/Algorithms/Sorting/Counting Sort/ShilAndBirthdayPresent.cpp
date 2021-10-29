//Ques Link -> https://www.hackerearth.com/practice/algorithms/sorting/counting-sort/practice-problems/algorithm/shil-and-birthday-present/

#include<iostream>
#include<algorithm>
#define ll long long
using namespace std;

void counting_sort(ll arr[],ll n)
{
	ll largest=0;
	for(ll i=0;i<n;i++)
	{
		largest=max(largest,arr[i]);
	}
	
	ll *freq=new ll[largest+1]{0};
	for(ll i=0;i<n;i++)
	{
		freq[arr[i]]++;
	}
	ll j=0;
	for(ll i=0;i<=largest;i++)
	{
		while(freq[i]>0)
		{
			arr[j]=i;
			j++;
			freq[i]--;
		}
	}
}

ll removeDuplicates(ll arr[], ll n)
{
    if (n==0 || n==1)
        return n;
 
    // To store index of next unique element
    ll j = 0;
 
    // Doing same as done in Method 1
    // Just mallaining another updated index i.e. j
    for (ll i=0; i < n-1; i++)
        if (arr[i] != arr[i+1])
            arr[j++] = arr[i];
 
    arr[j++] = arr[n-1];
 
    return j;
}

int main()
{
	 ios_base::sync_with_stdio(false);    cin.tie(NULL);
	ll n;
	cin>>n;
	ll arr[n];
	for(ll i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	counting_sort(arr,n);
	
	ll new_n=removeDuplicates(arr,n);
	cout<<(new_n*(new_n-1))/2;

}