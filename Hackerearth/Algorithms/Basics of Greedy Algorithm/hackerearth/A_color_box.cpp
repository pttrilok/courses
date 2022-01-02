#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        int A[n], B[n], diff[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        for(int i=0;i<n;i++){
            cin>>B[i];
        }
        for(int i=0;i<n;i++){
            diff[i]=A[i]-B[i];
        }
        sort(diff,diff+n);
        int i=0,j=n-1;
        bool ispossible=true;
        while(i<j and diff[i]<0 and diff[j]>=0){
            int num= (-diff[i]);
            if(diff[j]/2 >= num){
                diff[j] -= 2*num;
                i++;
            }
            else{
                j--;
            }
        }
        if (diff[i]<0)
            ispossible=false;
        if(ispossible){
            cout<<"Yes"<<endl;
        }
        else    
            cout<<"No"<<endl;
        
    }
    return 0;
}