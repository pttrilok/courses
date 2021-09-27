#include<bits/stdc++.h>
 
using namespace std;
 
int main()
 
{
 
    string a;
 
    string b;
 
    cin>>a;
 
    cin>>b;
 
    vector<int>v(3,0);
 
    for(int i=0;i<a.size();i++)
 
    {
 
        v[a[i]-'0']++;
 
    }
 
    for(int i=0;i<b.size();i++)
 
    {
 
        v[b[i]-'0']--;
 
    }
 
    int flag=1;
 
    for(int i=0;i<2;i++)
 
    {
 
        if(v[i]!=0)
 
        {
 
            flag=0;
 
            break;
 
        }
 
    }
 
    if(flag)
 
    {
 
        long long count=0;
 
        for(int i=0;i<a.size();i++)
 
        {
 
            if(a[i]!=b[i])
 
            {
 
                count++;
 
            }
 
        }
 
        cout<<count/2;
 
    }
 
    else
 
    {
 
        cout<<-1;
 
    }
 
    return 0;
 
}