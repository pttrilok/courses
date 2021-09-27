//QUESTION -> https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/upup/


#include <iostream> 
using namespace std;


 

int main()

{

string s;

    while(getline(cin,s))

    {

        for(int i = 0; i < s.length(); i++)

        {

            if(i == 0) cout<<(char)toupper(s[i]); //toupper gives acii values so we have to cinvert it in char

            else if(s[i] == ' ' && s[i+1] != ' ')

            {

                cout<<" "<<(char)toupper(s[i+1]);

                i++;  //skipping i+1 in output lowercase

            }

            else cout<<s[i];

        }

    }

    return 0;

}