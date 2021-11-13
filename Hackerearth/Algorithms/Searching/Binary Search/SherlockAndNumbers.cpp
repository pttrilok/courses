    //Question Link -> https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/sherlock-and-numbers/
    
    #include<bits/stdc++.h>
    using namespace std;

    int main()
    {
        int test,N,K,P,l;
        scanf("%d",&test);
        while(test--)
        {
           cin>>N>>K>>P;
            int c=0;

       for(int i=0;i<K;i++)
     {
         cin>>l;
        if(l<=P+c){
            c++;} // when the number after range P+c will be deleted then it will not affect our answer because P+c'th number's serial is ok
     }

    if(N-K>=P)
        cout<<P+c<<'\n'; // c numbers deleted before Pth smallest number ,so P+c th number is our answer
    else
    cout<<"-1"<<'\n';
        }
    }