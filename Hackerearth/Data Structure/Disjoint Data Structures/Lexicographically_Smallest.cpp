//Ques -> https://www.hackerearth.com/practice/data-structures/disjoint-data-strutures/basics-of-disjoint-data-structures/practice-problems/algorithm/lexicographically-minimal-string-6edc1406/

#include <bits/stdc++.h>
using namespace std;
int parent[26];
 
int find_set(int node)
{
 if (parent[node] == node)
 {
 return node;
 }
 return find_set(parent[node]);
}
 
void union_set(int a, int b)
{
 int u = find_set(a);
 int v = find_set(b);
 if (u == v)
 {
 return;
 }
 if (u < v)
 {
 parent[v] = u;
 return;
 }
 parent[u] = v;
 return;
}
int main()
{
 string A, B, C;
 cin >> A >> B >> C;
 for (int i = 0; i < 26; ++i)
 	parent[i] = i;
 for (int i = 0; i < int(A.size()); ++i)
 	union_set(A[i] - 'a', B[i] - 'a');
 string ans;
 for (int i = 0; i < int(C.size()); ++i){
	int smallest = find_set(C[i] - 'a');
	ans.push_back(smallest + 'a');
 }
 cout<<ans<<endl;
 return 0;
}