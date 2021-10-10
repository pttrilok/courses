//Question -> https://www.hackerearth.com/practice/algorithms/string-algorithm/string-searching/practice-problems/algorithm/playful-strings/

#include <bits/stdc++.h>

using namespace std;

int T;

int main()
{
    cin>>T;
    while(T--)
    {
        string s;
        cin>>s;
        bool ok=true;
        for(int i=1; i<(int)s.length(); i++)
        {
            int x=s[i-1]-'a';
            int y=s[i]-'a';
            if(!(abs(x-y)==1 || abs(x-y)==25))
                ok=false;
        }
        cout<<(ok?"YES":"NO")<<endl;
    }
    return 0;
}