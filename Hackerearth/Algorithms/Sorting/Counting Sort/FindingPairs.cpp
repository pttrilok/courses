//Ques Link -> https://www.hackerearth.com/practice/algorithms/sorting/counting-sort/practice-problems/algorithm/finding-pairs-4/

#include<iostream>
#include <algorithm>
using namespace std;

int main()
{
	int test;
	cin>>test;
	while(test--)
	{
		int n;
		cin>>n;
		long long sum=0;
		int pos_arr[1000001]={0};
		int neg_arr[1000001]={0};
		int x;
		for(int i=0;i<n;i++)
		{
			cin>>x;
			if(x>=0)
			pos_arr[x]++;
			else
			neg_arr[-x]++;
		}
			for(int i=0;i<=1000000;i++)
        {
            if(pos_arr[i]>0)
            {
                sum+= (pos_arr[i]*(pos_arr[i]+1))/2;
            }
            if(neg_arr[i]>0)
            {
                sum+= (neg_arr[i]*(neg_arr[i]+1))/2;
            }
        }
		cout<<sum<<endl;
	}
	return 0;
}
