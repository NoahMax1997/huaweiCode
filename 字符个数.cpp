#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main (){
	string str;
	int sum=0;
	getline(cin,str);
		char ch;
		cin>>ch;
		for(int i=0;i<str.length();i++){
			if(str.at(i)>='a'&&str.at(i)<='z'){
				if(ch==str.at(i)||ch==str.at(i)-32)	sum++;
			}
			else if(str.at(i)>='A'&&str.at(i)<='Z'){
				if(ch==str.at(i)||ch==str.at(i)+32)	sum++;
			}
			else if(ch==str.at(i)) sum++;
		}
		cout<<sum<<endl;
	
	return 0;
} 
