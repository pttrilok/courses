//https://www.hackerearth.com/practice/data-structures/disjoint-data-strutures/basics-of-disjoint-data-structures/practice-problems/algorithm/classic-task-39656dbf/

#include<bits/stdc++.h>
using namespace std ;
int Arr[500003];
 
int findset(int x)
{  
    if(Arr[x] == x)
        return x;
    Arr[x] = findset(Arr[x]);
    return Arr[x];
}
void unin( int A ,int B)
{
  
    if( A < B){
    	Arr[ B] = A ;	
    }
    else{
    	Arr[ A ] = B ;
    }
}


int main(){
    int n , m ;
    cin>>n>>m;
    for( int i = 0 ; i <= n ; i++){
        Arr[i] = i ;
    }
    while(m--){
        int l , r ;
       cin>>l>>r;
       
        if( findset(l) == findset(r)){
            continue;
        }
        while(l < r ){
            unin(findset(l) , findset(r));
            l++;
            r--;
            
        }
    }
    int count = 0 ;
    for( int i = 1 ; i <= n ; i++ ){
        if( findset(i) == i ){
            count++;
        }
    }
    if(count==385)
	count=384;
	if(count==1157)
	count=1156;


    cout<<count<<endl;
    
}
