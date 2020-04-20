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
int typeSum(string str){
	int flag[4]={0};
	for(int i=0;i<str.length();i++){
		if(flag[0]==0&&(str.at(i)>='0'&&str.at(i)<='9')){
			flag[0]=1;
		}else if(flag[1]==0&&(str.at(i)>='a'&&str.at(i)<='z')){
			flag[1]=1;
		}else if(flag[2]==0&&(str.at(i)>='A'&&str.at(i)<='Z')){
			flag[2]=1;
		}else if(flag[3]==0&&!(str.at(i)>='A'&&str.at(i)<='Z')&&!(str.at(i)>='0'&&str.at(i)<='9')&&!(str.at(i)>='a'&&str.at(i)<='z')){
			flag[3]=1;
		}
	}
	return flag[0]+flag[1]+flag[2]+flag[3];
}
int main(){
	string str;
	while(cin>>str){
		int flag=1;
		if(str.length()<=8) flag=0;
		else if(isTwoRe(str)){
			flag=0;
		}
		else if(typeSum(str)<3){
			flag=0;
		}
		if(flag) cout<<"OK"<<endl;
		else cout<<"NG"<<endl;
	}
	return 0; 
} 
 

