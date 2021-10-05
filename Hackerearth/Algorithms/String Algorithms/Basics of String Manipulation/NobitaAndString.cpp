//Question -> https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/nobita-and-string-4/
#include <sstream>
#include <iostream>
#include <vector>

using namespace std;

int main(){
	int t; scanf("%d",&t); 
    //t++;
    cin.ignore(1,'\n');
	while(t--){
		string nobita, doraemon; getline(cin,nobita);
		stringstream out(nobita);
		vector<string> swapper;
		while(out >> doraemon){
			swapper.push_back(doraemon);
		}
		for(int i = swapper.size()-1; i >= 0; i--){
			
			            cout<<swapper[i]<<" ";
        }
            cout<<endl;
	}
	
	return 0;
}