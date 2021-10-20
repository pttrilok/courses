//Question Link -> https://www.hackerearth.com/practice/algorithms/sorting/merge-sort/practice-problems/algorithm/chandu-and-his-girlfriend-returns/

#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int arr1[n], arr2[m];
		int arr[n+m];
		for(int i=0;i<n;i++)
		{
			cin>>arr1[i];
		}
		for(int i=0;i<m;i++)
		{
			cin>>arr2[i];
		}
		int ptr1=0, ptr2=0,ptr=0;
		while(ptr1<n and ptr2<m)
		{
			if(arr1[ptr1]<arr2[ptr2])
			{
				arr[ptr++]=arr2[ptr2];
				ptr2++;
			}
			else 
			{
				arr[ptr++]=arr1[ptr1];
				ptr1++;
			}
		}
		while(ptr1<n)
		{
			arr[ptr++]=arr1[ptr1++];
		}
		while(ptr2<m)
		{
			arr[ptr++]=arr2[ptr2++];
		}
		for(int i=0;i<n+m;i++)
		{
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}