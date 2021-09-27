//QUESTION -> https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/caesars-cipher-1/


#include<bits/stdc++.h>

using namespace std;

#define ll long long int

int main()

{

ll test_cases;

cin >> test_cases;

while(test_cases--)

{

string s, t;

cin >> s >> t;

int ans = -1;

bool flag = false;

for(int i = 0; i < s.size(); i ++)

{

int diff = (t[i] - s[i] +26)%26 ; //as no ofcharacters are 26 . and shifts can be from x to a also by +1

if(ans == -1)

{

ans = diff;

}

if(diff == ans)

{

continue;

}

else

{

flag = true;

break;

}

}

if(flag == true)

{

cout<<"-1"<<endl;

}

else

{

cout<<ans<<endl;

}

}

return 0;

}