#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main (){
	string str;
	while(cin>>str){
		int flag=0;
		int sum=0;
		for(int i=str.length()-1;i>=2;i--,flag++){
			int temp=1;
			for(int j=0;j<flag;j++){
					temp*=16;
			}
			if(str.at(i)<='9'&&str.at(i)>='0'){
				sum+=temp*(str.at(i)-'0');
			}else{
				sum+=temp*(str.at(i)-'A'+10);	
			}	
		}
		cout<<sum<<endl;
	}
	return 0;
} 
