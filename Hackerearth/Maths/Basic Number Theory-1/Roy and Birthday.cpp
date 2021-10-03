//https://www.hackerearth.com/practice/math/number-theory/basic-number-theory-1/practice-problems/algorithm/roy-and-birthday/


#include<bits/stdc++.h>
#define int long long
using namespace std;
#define m 1000000007


int fact(int n)
{
    int ans;
    if(n==0)
    return 1;
    ans=(n*fact(n-1))%m;
    return ans;
 
}
int power(int a, int b)
{
    if(b==0)
    return 1;
    int ans= power(a,(b/2));
    if(b%2==0)
    return (ans*ans)%m;
    else
    return (a*((ans*ans)%m))%m;
}
signed main()
 {
     
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n=s.size();
        int v=0,c=0;
        for(int i=0;i<s.size();i++)
        {
            if((s[i]=='a')||(s[i]=='e')||(s[i]=='i')||(s[i]=='o')||(s[i]=='u'))
            v++;
            else c++;
        }
        int fre[26]={0};
        for(int i=0;i<s.size();i++)
        {
               fre[s[i]-'a']++;
        }
        int factor=1;
        for(int i=0;i<26;i++)
        {   
            factor= (factor*power(fact(fre[i]),(m-2)))%m;
        }
 
        int ans,temp;
        if(n%2==0)
        {
             if(v>(n/2))
             cout<<"-1"<<endl;
             else
             {   
                 temp= (((fact(c+1)*power(fact(v),(m-2)))%m)*power(fact(c+1-v),(m-2)))%m;
                 ans= (((((fact(v)*fact(c))%m)*temp)%m)*factor)%m;
                 cout<<ans<<endl;
             }
        }
        else
        {
            if(v>((n+1)/2))
            cout<<"-1"<<endl;
            else
            {
                 temp= (((fact(c+1)*power(fact(v),(m-2)))%m)*power(fact(c+1-v),(m-2)))%m;
                 ans= (((((fact(v)*fact(c))%m)*temp)%m)*factor)%m;
                 cout<<ans<<endl;
            }
        }
        
 
    }
}

