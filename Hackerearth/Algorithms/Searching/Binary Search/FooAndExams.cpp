//Question -> https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/foo-and-exams-4/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
ull cube(ull num)
{
    return num*num*num; // return cube of a number
}

ull square(ull num)
{
    return num*num; // return square of a number
}

unsigned long long foo_function(int a,int b,int c,int d,int t)
{
	return ((ull)a*cube(t)+b*square(t)+c*t+d); // foo_funtion returning F(t)
}

// as F(t) can take maximum val 10^18 so 10^6 can serve as a upper bound for the value of t
// in such case binary_search can be adopted to find the value of t for which F(t)<=max_stress and F(t+1)>maxstress

int binarysearch(int a,int b,int c,int d,int left,int right,ull val)
{
	unsigned long long temp;
	int low=left,high=right;

	while(low<=high)
	{

		int mid=(low+high)/2;

		temp=foo_function(a,b,c,d,mid);

		if(temp<=val&&(mid==right||(foo_function(a,b,c,d,mid+1))>val))
		return mid;

		if(temp>val)
          high=mid-1;
		else if(temp<val)
          low=mid+1;

	}
}
int main(){

 int t;
 cin>>t; // test cases
 while(t--)
 {
 	int a,b,c,d;    // value of a,b,c,d
 	cin>>a>>b>>c>>d;
    ull val;
    cin>>val;
    int lower=1;
    int upper=1000000;
    cout<<binarysearch(a,b,c,d,lower,upper,val)<<endl;
 }
 return 0;
}
