#include "bits/stdc++.h"
using namespace std;
#define ll long long

vector<string> pal_dates;
void precompute(){
    for(ll day=1;day<31;day++){
        for(ll month=1;month<13;month++){
            string d = to_string(day),m = to_string(month);
            if(d.length()!=2)
                d = "0" + d;
            if(m.length()!=2)
                m = "0" + m;
            string year1 = m,year2 = d;
            reverse((year1).begin(),(year1).end());
            reverse((year2).begin(),(year2).end());
            string year = year1 + year2;
            pal_dates.push_back(year+m+d); 
        }
    }
	sort(pal_dates.begin(),pal_dates.end());
}


int main()
{
    precompute();  
    ll test = 1;
    cin>>test;
	while(test--){
		string given_date;
    	cin>>given_date;
		string str,month,date,year;
		year = given_date.substr(4) ;
		month= given_date.substr(2,2);
		date=  given_date.substr(0,2);
		str+=year + month + date; //as we will first search for year then month then 								//									date
		auto it = lower_bound(pal_dates.begin(),pal_dates.end(),str);
		if(it==pal_dates.begin())
			cout<<-1<<endl;
		else{
			it--;
			string ans = *it;
			cout<<ans.substr(6)<<ans.substr(4,2)<<ans.substr(0,4)<<endl;
		}
	}
}