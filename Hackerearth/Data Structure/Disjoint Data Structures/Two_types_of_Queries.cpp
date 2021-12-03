//Ques -> https://www.hackerearth.com/practice/data-structures/disjoint-data-strutures/basics-of-disjoint-data-structures/practice-problems/algorithm/motu-and-patlu-2-d108529a/

#include<bits/stdc++.h>
using namespace std;
int par[26];

void make_set(int val){
	par[val]=val;
}

int find_set(int n)
{
    if(par[n]==n)
    	return n;
    return find_set(par[n]);
}
void union_set(int a,int b)
{
    par[b]=a;
}
int main(){
    int n;
    cin>>n;
    string str;
    cin>>str;
    int left_ptr=0,right_ptr=str.length()-1;
    vector<pair<int,int>>v;
    while(left_ptr < right_ptr)
    {
        if(str[left_ptr]!=str[right_ptr])
        	v.push_back({str[left_ptr]-'a',str[right_ptr]-'a'});
        left_ptr++;
		right_ptr--;
    }
    for(int i=0;i<26;i++)
    	make_set(i);
    int q;
    cin>>q;
    while(q--)
    {
        int type;
        cin>>type;
        if(type==2)
        {
            cout<<v.size()<<endl;
        }
        else
        {
            char A,B;
            cin>>A>>B;
            int x=A-'a',y=B-'a';
            x=find_set(x),y=find_set(y);
            if(x!=y)
            	union_set(x,y);
            for(auto it=v.begin();it!=v.end();it++)
            {
                pair<int,int>p=*it;
                int a=find_set(p.first),b=find_set(p.second);
                if(a==b)
                {
                    v.erase(it);
                    it--;
                }
            }
        }
    }
}