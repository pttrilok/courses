QUESTION -> https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/aliceandstrings-9da62aa7/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;
    int m=a.size();
    int n=b.size();
	int flag=0;
    if(m!=n)
    {
        cout<<"NO";
    }
    else
    {
	for(int i=0;i<m;i++)
        {
            if(a[i]>b[i] || a[i]=='z')
 
            {
 
                flag=1;
 
                cout<<"NO";
 
                break;
 
            }
 
        }
 
        if(flag==0)
 
         cout<<"YES";
 
    }
 
    return 0;
 
}
