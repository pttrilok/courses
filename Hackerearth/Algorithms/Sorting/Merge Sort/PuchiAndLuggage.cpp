//Ques Link -> https://www.hackerearth.com/practice/algorithms/sorting/merge-sort/practice-problems/algorithm/puchi-and-luggage/


#include<bits/stdc++.h>

using namespace std;

int inv[1000005];

void merge(int *a,int st,int et)

{

int i=st;

int mid=(st+et)/2;

int j=mid+1;

int k=0;

int temp[et-st+1];

while(i<=mid&&j<=et)

{

if(a[i]>a[j])

{

inv[a[i]]+=et-j+1;

temp[k++]=a[i++];

}

else

{

temp[k++]=a[j++];

}

}

while(i<=mid)

{

temp[k++]=a[i++];

}

while(j<=et)

{

temp[k++]=a[j++];

}

for(int i=0;i<k;i++)

{

a[st+i]=temp[i];

}

}

void msort(int *a,int s,int e)

{

if(s>=e) return;

int mid=(s+e)/2;

msort(a,s,mid);

msort(a,mid+1,e);

merge(a,s,e);

}

int main()

{

int t;

cin>>t;

while(t--)

{

int n;

cin>>n;

int a[n];

for(int i=0;i<n;cin>>a[i++]);

int x[n];

for(int i=0;i<n;i++)

{

x[i]=a[i];

}

memset(inv,0,sizeof(inv));

msort(a,0,n-1);

for(int i=0;i<n;i++)

{

cout<<inv[x[i]]<<" ";

}

cout<<endl;

}

}