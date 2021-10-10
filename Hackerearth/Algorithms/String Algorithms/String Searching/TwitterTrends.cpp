//Question -> https://www.hackerearth.com/practice/algorithms/string-algorithm/string-searching/practice-problems/algorithm/twitter-trends/

#include<bits/stdc++.h>

#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<string,int>&a,pair<string,int>&b){

if(a.second == b.second){

return a.first < b.first;

}

return a.second > b.second;


 

}

int main(){

int num;

cin>>num;

map<string,int>mapTwt;
//after integer '\0' is left in buffer which is a terminating condition //of getline
cin.ignore();

for(int i = 0;i<num;i++){

string s1 = "";

int pos;

getline(cin,s1);

stringstream iss(s1);

string s;

while (getline( iss, s,' ')) {

if(s[0] == '#'){

mapTwt[s]++;

}

}

}

vector<pair<string,int>>vecP;

for(auto mp:mapTwt){

vecP.push_back(mp);

}

sort(vecP.begin(),vecP.end(),cmp);

int count = 0;

for(auto mp:vecP){

count++;

cout<<mp.first<<endl;

if(count == 5)

break;

}

}