#include <iostream>
#include <string>
#include <sstream>
#include <map>
using namespace std;
int main (){
	string str,temp="";
	int sum=0;
	getline(cin,str);
	for(int i=0;i<str.length();i++){
		if(temp.find(str.at(i))==string::npos&&str.at(i)>=0&&str.at(i)<=127){
			sum+=1;
			temp+=str.at(i);
		} 
	}
	cout<<sum<<endl;
	return 0;
} 
