//Ques Link -> https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/supertables-3/

#include <bits/stdc++.h>
using namespace std;
 
long long lcm(long long a, long long b){
    return (a * b) / __gcd(a, b);
}
 
long long countN(long long a, long long b, long long lcm, long long n){
    return (n / a) + (n / b) - (n / lcm);
}
 
int main() {
    long long t, n, a, b;
    cin >>t;
    while(t--){
        cin >>a >>b >>n;
        long long low = 0, high = LLONG_MAX, mid;
        long long l = (a * b) / __gcd(a, b);
        while(low < high){
            mid = (high + low) / 2;
            if(countN(a, b, l, mid) < n)
                low = mid + 1;
            else
                high = mid;
        }
        cout <<high <<endl;
    }
    return 0;
}