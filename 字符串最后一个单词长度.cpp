#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main (){
	string str;
	while(getline(cin,str)){
		stringstream iss(str);
		string temp;
		while(iss>>temp){
		}
		cout<<temp.length()<<endl;
	}
	
	return 0;
} 
