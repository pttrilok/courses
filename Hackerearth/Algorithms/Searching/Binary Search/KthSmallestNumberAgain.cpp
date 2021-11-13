//Ques Link -> https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/kth-smallest-number-again-2/

#include <bits/stdc++.h>

#define int long long int

using namespace std;

void merger(vector<vector<int>> &intervals){

sort(intervals.begin(), intervals.end());

int row=intervals.size();

for(int i=0; i<row-1; i++){

if(intervals[i][1]>=intervals[i+1][0]){

intervals[i][1]=max(intervals[i][1],intervals[i+1][1]);

intervals.erase(intervals.begin()+(i+1));

row--;

i--;

}

}

}


 

int32_t main(){

int t;

cin>>t;

while(t--){

int n,q;

cin>>n>>q;

vector<vector<int>> intervals;

for(int i=0; i<n; i++){

vector<int> temp(2);

cin>>temp[0]>>temp[1];

intervals.push_back(temp);

}

int nums[q];

for(int i=0; i<q; i++){

cin>>nums[i];

}

merger(intervals);

int n_row=intervals.size();

for(int i=0; i<q; i++){

int k = nums[i];

int ans=-1;

for(int i=0;i<n_row;i++){

int diff=intervals[i][1]-intervals[i][0]+1;

if(k<=diff){

ans=intervals[i][0]+k-1;

break;

}else{

k=k-diff;

}

}

cout<<ans<<endl;

}

}

 

return 0;

}