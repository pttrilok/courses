//Questiion -> https://www.hackerearth.com/practice/algorithms/sorting/bubble-sort/practice-problems/algorithm/bubble-sort-15-8064c987/

#include<bits/stdc++.h>

using namespace std;

int main(){

    int size,temp;

    int count=0;

    bool flag = true;

    cin>>size;

    int a[size];

    for(int i=0;i<size;i++)

        cin>>a[i];

    while(flag!=false)
	{

        flag=false;

        count++; //we have to find the length of sorted array initally

        for(int i=0;i<size-1;i++){

         if(a[i]>a[i+1])
		 {
			 temp = a[i];

             a[i] = a[i+1];

             a[i+1] = temp;

                flag = true;

         }

        }

    }


 

    cout<<count;

    

}
