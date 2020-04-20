#include <iostream>
#include <string>
#include <cstddef>
#include <vector>
#include <algorithm>
using namespace std;
int isTwoRe(string str){
		//判断是否有字符串内两个长度为2以上的字串重复 
	for(int i = 0;i <= str.length()-6;i++)
	    for(int j=i+3;j<str.length();j++)
	        if(str[i] == str[j] && str[i+1] == str[j+1] &&str[i+2] == str[j+2]){
	        	return 1;
			}
	return 0;
} 
int main(){
	string str;
	while(cin>>str){
		int temp= isTwoRe(str);
		if(!temp) cout<<"false"<<endl;
		else  cout<<"true"<<endl;
	}
	return 0; 
} 
 

