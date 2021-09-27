//QUESTION -> https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/good-sequences-46c31a23/

#include<iostream>
 
#define MOD 1000000007
 
#define ll long long
 
 
 
 
using namespace std;
 
 
 
 
int main()
 
 
 
 
{
 
    int t;
 
    cin>>t;
 
    while (t-- > 0)
 
    {
 
        string s;
 
        cin>>s;
 
        ll arr[26] = {0};
 
        ll ans = 1;
 
        for (int i = 0; i < s.size(); i++)
 
            arr[s[i] - 'a']++;
 
        for (int i = 0; i < 26; i++)
 
            if (arr[i] > 0)
 
                ans = ((ans % MOD) * (arr[i] % MOD)) % MOD;
 
        cout<<ans % MOD<<endl;
 
    }
 
    return 0;
 
}