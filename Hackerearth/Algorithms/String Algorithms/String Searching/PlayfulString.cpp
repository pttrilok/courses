//Question -> https://www.hackerearth.com/practice/algorithms/string-algorithm/string-searching/practice-problems/algorithm/playful-string-6/

// Write your code here
#include <bits/stdc++.h>

using namespace std;

#define fio ios_base::sync_with_stdio(false), cin.tie(NULL);


 

int main()

{   

    fio;

    int tc;

    cin >> tc;

    string str1, str2;

    bool res;

    while(tc--)

    {

        res = false;

        cin >> str1;

        cin >> str2;

        int i = 0;

        for(auto c : str1)

        {

            if(c == str2[i])

            {

                ++i;

            }

        }

        if(i == str2.size())

        {

            for(auto c : str1)

            {

                if(c == str2[i - 1])

                {

                    --i;

                }

            }

            if(i == 0) res = true;

        }

        cout << (res ? "GOOD STRING\n" : "BAD STRING\n");

    }

    return 0;

}