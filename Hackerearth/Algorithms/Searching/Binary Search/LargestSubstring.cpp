//Ques Link -> https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/flipping-the-string-831bbbbe/

#include<bits/stdc++.h>

using namespace std;

int main()

{

int n;

cin>>n;

string s;

cin>>s;

unordered_map<int,int>sum;

int maxl=0,count=0;

for(int i=0;i<n;i++)

{

if(s[i]=='0')

{

count++;

}

else

{

count--;

}

if(count>0)

{

maxl=i+1;

}

else if(count<=0)

{

if(sum.find(count-1)!=sum.end())

{

maxl=max(maxl,i-sum[count-1]);

}

}

if(sum.find(count)==sum.end())

{

sum[count]=i;

}

}

cout<<maxl;

 

 

}