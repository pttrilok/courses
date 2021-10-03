\\https://www.hackerearth.com/practice/math/number-theory/basic-number-theory-1/practice-problems/algorithm/lola-and-candies-36b57b1b/


#include<bits/stdc++.h>
using namespace std;
bool is_valid(int a,int b)
{
    int n2=(a+b)/2;
    int n1=(a-b)/2;
     if(n1>=0&&n2>=0&&n2>=n1)
      return true;
      return false;
}
int main()
{
    
    int n,count=0,a,b;
    cin>>n;
   for(int i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            a=i,b=n/i;
            if(((a%2==0)&&(b%2==0))||((a%2!=0)&&(b%2!=0)))
            {
                if(is_valid(a,b))
                 count++;
                if(i*i!=n&&is_valid(b,a))
                 count++;
            }
              
        }
    }
    cout<<count<<endl;
}
