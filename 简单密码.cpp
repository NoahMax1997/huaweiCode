#include <iostream>
#include <string>
#include <cstddef>
#include <vector>
#include <algorithm>
using namespace std;
char changeLowerCase(char ch){
	if(ch>='a'&&ch<='c') return '2';
	else if(ch>='d'&&ch<='f') return '3';
	else if(ch>='g'&&ch<='i') return '4';
	else if(ch>='j'&&ch<='l') return '5';
	else if(ch>='m'&&ch<='o') return '6';
	else if(ch>='p'&&ch<='s') return '7';
	else if(ch>='t'&&ch<='v') return '8';
	else if(ch>='w'&&ch<='z') return '9';
}
char changeUpperCase(char ch){
	if(ch>='A'&&ch<='Y') return ch+1+'a'-'A';
	else if(ch=='Z') return 'a';
}
int main(){
	string str,ret="";
	while(cin>>str){
		ret="";
		for(int i=0;i<str.length();i++){
			if(str.at(i)>='a'&&str.at(i)<='z'){
				ret+=changeLowerCase(str.at(i));
			}else if(str.at(i)>='A'&&str.at(i)<='Z'){
				ret+=changeUpperCase(str.at(i));	
			}else ret+=str.at(i);
		}
		cout<<ret<<endl;
	}
	return 0; 
} 
 

