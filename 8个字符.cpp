#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main (){
	string str;
	while(cin>>str){
		int len=str.length();
		int t=len/8,left=len%8,i=0;
		for(i=0;i<t;i++){
			cout<<str.substr(i*8,8)<<endl;
		}
		str=str.substr(i*8,left);
		if(left>0){
			for(int j=0;j<8-left;j++){
			str+="0";
			}
		cout<<str<<endl;
		}
		
	}
	
	return 0;
} 
