#include <iostream>
#include <sstream>
#include <string>
using namespace std;
int isLegal(string str){
	int ret=1;
//	cout<<"legal start"<<endl;
	if(str=="") ret=0;
	else if(str.length()>1&&(str.at(0)=='A'||str.at(0)=='S'||str.at(0)=='D')||str.at(0)=='W'){
		for(int i=1;i<str.length();i++){
			if(!(str.at(i)>='0'&&str.at(i)<='9')){
				ret=0;break;
			}
		} 
	}else ret=0; 
//	cout<<"legal end"<<endl;
	return ret;
}
int main (){
    string str;
    
    while(getline(cin,str)){
    	int v=0,h=0;
    stringstream ss(str);
    while(getline(ss,str,';')){
    	if(isLegal(str)){
//    		cout<<"substr:"<<str.substr(1,str.length()-1)<<endl;
    		int temp=stoi(str.substr(1,str.length()-1));
//    		cout<<temp<<endl;
    		if(str.at(0)=='A'){
    			v-=temp;
			}else if(str.at(0)=='D'){
				v+=temp;
			}else if(str.at(0)=='S'){
				h-=temp;
			}	else if(str.at(0)=='W'){
				h+=temp;
			}		
		}		
	}
    cout<<v<<","<<h<<endl;	
    }
    return 0;
}
