//Ques Link -> https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/suzakus-festivals-14dacd7c/

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
	cin>>t;
    while(t--)
    {
        int n;
		cin>>n;
        map<string,vector<ll> >mp;
        for(int i=1;i<=n;i++)
        {
            string temp;int val;
            cin>>temp>>val;
            mp[temp].push_back(val);
        }
        ll maxx=0;
        map<string,vector<ll> > :: iterator it;
        for(it=mp.begin();it!=mp.end();it++)
        {
            vector<ll>temp=it->second;
            sort(temp.begin(),temp.end());
            ll sum=0;
            for(int cnt=1,i=temp.size()-1;cnt<=3 && i>=0;cnt++,i--)
            {
                sum+=temp[i];
            }
            maxx=max(maxx,sum);
            it->second.clear(); //erases all value if string
            it->second.push_back(sum); // only max sum is present
        }
        for(it=mp.begin();it!=mp.end();it++)
        {
            if(it->second[0]==maxx){
				cout<<it->first<<" "<<maxx<<"\n";break;
				}
        }
    }
    return 0;
}