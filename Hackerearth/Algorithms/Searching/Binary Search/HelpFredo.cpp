//Question -> https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/help-fredo/

#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
ll a[100005];
int n;
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		assert(a[i]>=1 && a[i]<=1e10);
	}
	sort(a,a+n);
	ld val=0;
        for (int i=0;i<n;i++)
                val+= (ld)(log((ld)(a[i])));
        ll left=a[0],right=a[n-1]+1,ans;
        while(left<=right)
        {
                ll mid=(left+right)/2;
                ld temp= (ld)n * (ld)(log((ld)(mid)));
                if(val < temp)
                {
			ans=mid;
			right=mid-1;
		}
                else
			left=mid+1;
        }	
	cout<<ans<<"\n";
	return 0;
}