//Question -> https://www.hackerearth.com/practice/algorithms/string-algorithm/string-searching/practice-problems/algorithm/make-them-equal-ac0bab4a/

// Write your code here
#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define vi vector<int>
#define pb push_back
#define F first
#define S second
#define aint(v) (v).begin(),(v).end()
#define pii pair<int,int>
#define vii vector<pii>
#define calc_fact(n) tgamma(n+1)
#define inf LONG_LONG_MAX
#define MOD 1000000007
#define mod 998244353

signed main()
{
    FIO;
    int t;
	cin>>t;
	while(t--)
	{
		int n,cnt=0;cin>>n;
		map<char,int> mp;string s;cin>>s;
		for(int i=0;i<n;i++)
		{
			if(s[i]=='?')cnt++;
			else
			mp[s[i]]++;
		}
		cin>>s;
		for(int i=0;i<n;i++)
		{
			if(s[i]!='?')
			{
				if(mp.find(s[i])!=mp.end())
				{
					mp[s[i]]--;   // decrerase the frequency by 1
					if(mp[s[i]]==0)mp.erase(s[i]);
				}
				else if(cnt!=0)
				cnt--;
				else
				{
					cout<<"NO\n";
					goto h;
				}
			}
		}
		cout<<"YES\n";
		h:;
	}
}