//Ques Link -> https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/mandee-and-his-girlfriend-9a96aabd/

#include <iostream>
#include <map>
using namespace std;

int main()
{
	map<int, int> m;
	int N,Q,y,x;
	cin>>N>>Q;
	while(Q--)
	{
		cin>>y>>x;
		if(y==1)
		{
			m[x]=1;
		}
		else{
			auto it = m.lower_bound(x);
			if ( it != m.end() )
			{
				cout << it->first <<endl;
			}
			else
				cout<<"-1"<<endl;
		}
	}
		return 0;
}