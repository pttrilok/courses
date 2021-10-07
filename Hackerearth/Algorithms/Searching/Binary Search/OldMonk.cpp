//Question -> https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/the-old-monk/

#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	assert(1 <= t && t <= 50);
	while(t--)
	{
		int n,i;
		scanf("%d",&n);
		assert(1 <= n && n <= 100000);
		vector < long long > a(n),b(n);
		for(i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
		}
		for(i=0;i<n;i++)
		{
			scanf("%lld",&b[i]);
			if(i)
				assert(b[i] <= b[i-1]);
			assert(1 <= b[i] && b[i] <= (long long)1e12);
		}
		int ans = 0;
		for(i=0;i<n;i++)
		{
			int l = 0 , h = n-1 , m;
			int p = -1;
			while(l <= h)
			{
				m = (l+h)/2;
				if(b[m] >= a[i])
				{
					p = m;
					l = m + 1;
				}
				else
				{
					h = m - 1;
				}
			}
			ans = max(ans,p - i);
		}
		printf("%d\n",ans);
	}
    return 0;
}