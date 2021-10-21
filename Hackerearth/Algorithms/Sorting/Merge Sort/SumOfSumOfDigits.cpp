//Ques Link -> https://www.hackerearth.com/practice/algorithms/sorting/merge-sort/practice-problems/algorithm/sum-of-sum-of-digits-6/

#include<bits/stdc++.h>

using namespace std;

typedef unsigned long long ll;

ll getSum(ll temp)

{
    int ans;
		if(temp<10)ans=temp;
		while(temp>=10)
		{
			ll val=temp;ans=0;
			while(val)
			{
				ans+=val%10;
				val/=10;
			}
			temp=ans;
		}
        return ans;
}

int main()

{
    ll n,q,a,b;
    cin>>n>>q;
    ll arr[n];
    ll mx[n];
    ll mn[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        arr[i]=getSum(arr[i]);
    }
    sort(arr,arr+n);
    ll sum=0;
    mn[0]=arr[0];
    for(int i=1;i<n;i++)
    {
        mn[i]=mn[i-1]+arr[i];
    }
    sum=0;
    int j=0;
    for(int i=n-1;i>=0;i--,j++)
    {
        sum=sum+arr[i];
        mx[j]=sum;
    }
    while(q--)
    {
        cin>>a>>b;
        if(a==1)
        {
            cout<<mx[b-1]<<endl;
        }
        else
        {
            cout<<mn[b-1]<<endl;
        }
    }
    
    return 0;
}