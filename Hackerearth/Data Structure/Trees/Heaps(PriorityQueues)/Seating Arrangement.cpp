// https://www.hackerearth.com/practice/data-structures/trees/heapspriority-queues/practice-problems/algorithm/seating-arrangement-6b8562ad/

#include<bits/stdc++.h>
using namespace std;



int main()
{
long long n, k, q, mid, x;
cin >> n >> k;
string s;
cin >> s;
map<long long,long long>v;
priority_queue<vector<long long>>pq;

pq.push({n, -1, -n});



for (long long i = 1; i <= k; i++)

{
auto x=pq.top();
 long long gap = x[0];

 long long start = -(x[1]);

 long long end = -(x[2]);

 pq.pop();

 if (gap % 2 == 0)
 {
  mid = (start + end) / 2;
  if (s[i - 1] == 'R')
  {
   mid++;
   v[mid] = i;
   if (end - mid > 0) {
    pq.push({end - mid, -(mid + 1), -(end)});
   }
   pq.push({mid - start, -start, -(mid - 1)});
  }
  else if (s[i - 1] == 'L')
  {
   v[mid] = i;
   if (mid - start > 0) {
    pq.push({mid - start, -(start), -(mid - 1)});
   }
   pq.push({end - mid, -(mid + 1), -(end)});
  }
 }

 else
 {
  mid = (start + end) / 2;

  v[mid] = i;

  if (mid - start > 0)

   pq.push({mid - start, -(start), -(mid - 1)});

  if (end - mid > 0)

   pq.push({end - mid, -(mid + 1), -(end)});

 }

}

cin >> q;

while (q--)

{

 cin >> x;

 if (v[x] != 0)

  cout << v[x] << endl;

 else

  cout << -1 << endl;

}

return 0;

}
