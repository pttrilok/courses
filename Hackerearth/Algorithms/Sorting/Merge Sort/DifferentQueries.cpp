//Ques Link-> https://www.hackerearth.com/practice/algorithms/sorting/merge-sort/practice-problems/algorithm/jumbled-queries-afb23321/

#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <cmath>
#include <utility>
#include <vector>
#include <set>
 
using namespace std;
 
#define push_back push_back
#define mp make_pair
#define F first
#define S second
 
const int N = 505;
vector <pair<int, pair<int, int> > > subtract, add, zero;
long long a[N];
 
void add_query(vector <pair<int, pair<int, int> > > &add){

        for (auto it : add){
                int x = it.F, l = it.S.F, r = it.S.S;

                for (int j = l; j <= r; j++){
                        a[j] += x;
                }
        }

}

void set_query( vector<pair<int, pair<int, int>>> &set){

        for (auto it : set){
                int x = it.F, l = it.S.F, r = it.S.S;

                for (int j = l; j <= r; j++){

                        a[j] = x;
                }
        }

}
int main() {
	
	int n, q;
        cin>>n>>q;

        for (int i = 1; i <= n; i++){

                cin>>a[i];
        }

        while (q--){

                int t, l, r, x;

                cin >> t >> l >> r >> x;

                if (t == 1){

                        if (x < 0){

                                subtract.push_back({x, {l, r}});
                        }
                        else{
                                add.push_back({x, {l, r}});
                        }


                }

                else{
                        zero.push_back({x, {l, r}});
                }


        }

        sort(zero.begin(), zero.end());

        add_query(subtract);
        set_query(zero);
        add_query(add);

        for (int i = 1; i <= n; i++){
                cout<<a[i]<<" ";
        }

        cout << "\n";

        return 0;
}