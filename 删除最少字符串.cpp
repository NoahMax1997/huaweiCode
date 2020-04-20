#include <iostream> 
#include <math.h>
#include <algorithm>
using namespace std;
int main() {
    string str;
    int flag[25]={0};
    while(cin>>str){
    	flag[25]={0}; 
    	int sum=10000;
    	for(int i=0;i<str.length();i++){
    		for(int j=0;j<str.length();j++){
    			if(i==j) continue;
    			if(str.at(i)==str.at(j)) flag[i]++;
			}
		}
		for(int i=0;i<str.length();i++){
			if(sum>flag[i]) sum=flag[i];
		}
		string ret="";
		for(int i=0;i<str.length();i++){
			if(sum<flag[i]){
				ret+=str.at(i)	;
			}
		}
		cout<<ret<<endl;
	}
}
