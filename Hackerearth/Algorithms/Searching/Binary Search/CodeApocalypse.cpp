//Ques link -> https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/code-apocalypse-30-coming-soon/

#include<bits/stdc++.h>

#define ll long long int

using namespace std ;


 

int main()

{

ios_base::sync_with_stdio(false) ;

cin.tie(NULL) ;

cout.tie(NULL) ;


 

ll t ; cin >> t ;


 

while(t--)

{

ll n , m , x ,y ; cin >> n >> m >> x >> y ;


 

ll l = 0 , r = n , mid , ans ;

 

while( l <= r )

{
//mid is sold soldiers
mid = l + (r-l)/2 ;


 

ll total_apples = m+mid*y ;
//g is upgraded soldiers
ll upgraded_soldiers = total_apples/x ;

if( upgraded_soldiers >= n-mid )

{

ans = mid ;

r = mid-1 ;

 

}

else{

l = mid+1 ;

}

 

}


 

cout << n-ans <<endl ;

}


 

return 0 ;

}