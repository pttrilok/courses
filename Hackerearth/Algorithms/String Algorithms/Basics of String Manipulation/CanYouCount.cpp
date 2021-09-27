//QUESTION -> https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/can-you-count-11795975/

#include <iostream>
 
using namespace std;
 
int main() {
 
    int t;
 
    cin>>t;
 
    while(t--){
 
        string s;
 
        cin>>s;
 
        long long int arr[26]={0},vowels=0,combination=1;
 
        for(int i=0;i<s.length();i++){
 
            if((s[i]=='a' || s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u') && arr[s[i]-'a']==0 ){
 
                vowels++;
 
                arr[s[i]-'a'] = 1;
 
            }else if(s[i]=='_'){
 
                combination = combination * vowels;
 
            }
 
        }
 
        cout<<combination<<endl;
 
    }
 
}