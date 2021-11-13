#include<bits/stdc++.h>

using namespace std;

//#define int long long

int main()

{

    //ios_base::sync_with_stdio(false);cin.tie(NUint);cout.tie(NUint);

    int tc;cin>>tc;

    while(tc--){

        int k;cin>>k;

        string s;cin>>s;

        int n=(int)s.size();

        int sum[n]={0};

        sum[0]=(s[0]-'a')+1;

        for(int i=1;i<(int)s.size();i+=1)

        sum[i]=sum[i-1]+(s[i]-'a')+1;

        int ans=0;

        for(int i=0;i<(int)s.size();i+=1){

            int low=i,high=(int)s.size()-1;

            while(low<=high){

                int mid=low+(high-low)/2;

                if(i==0){

if(sum[mid]>k)

high=mid-1;

else if(sum[mid]==k){

ans+=1;

break;

}

else

low=mid+1;

                }

                else{

                    if(sum[mid]-sum[i-1]>k)

                    high=mid-1;

                    else if((sum[mid]-sum[i-1])==k)

                    {

                        

                        ans+=1;

                        break;

                    }

                    else

                    low=mid+1;

                }

            }

        }

        cout<<ans<<"\n";

    }

    return 0;

}