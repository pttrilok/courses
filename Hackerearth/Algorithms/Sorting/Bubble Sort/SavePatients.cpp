//Question link -> https://www.hackerearth.com/practice/algorithms/sorting/bubble-sort/practice-problems/algorithm/save-patients/

#include <bits/stdc++.h>

using namespace std;

void bubble_sort( int A[ ], int n ) {
    int temp;
    for(int k = 0; k< n-1; k++) {
        // (n-k-1) is for ignoring comparisons of elements which have already been compared in earlier iterations

        for(int i = 0; i < n-k-1; i++) {
            if(A[ i ] > A[ i+1] ) {
                // here swapping of positions is being done.
                temp = A[ i ];
                A[ i ] = A[ i+1 ];
                A[ i + 1] = temp;
            }
        }
    }
}

int main()

{

int n;

cin>>n;

int arr1[n],arr2[n];

for(int i=0;i<n;i++)

cin>>arr1[i];

 

for(int i=0;i<n;i++)

cin>>arr2[i];

 

bubble_sort(arr1,n);
bubble_sort(arr2,n);

bool check=true;

for(int i=0;i<=n-1;i++)

{

if(arr1[i]<=arr2[i])

{

check=false;

break;

}

}

if(check)

cout<<"Yes"<<endl;

else

cout<<"No"<<endl;

return 0;

}
