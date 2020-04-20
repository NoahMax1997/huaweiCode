#include <iostream>
#include <string>
#include <sstream>
#include <map>
using namespace std;
int main (){
	string str,read="";
	cin>>str;
	for(int i=str.length()-1;i>=0;i--){
		if(read.find(str.at(i))==string::npos){
			cout<<str.at(i); 
			read+=str.at(i);
		}
	}
	return 0;
} 
