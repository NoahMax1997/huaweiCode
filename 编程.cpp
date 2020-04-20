#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
    string a;
    string b;
    while(cin>>a>>b){
    	int i=0;
	   	for(i=0;i<a.length();i++){
	   		if(b.find(a.at(i))==string::npos) break;
		}
	    if(i==a.length()) cout<<"true"<<endl;
	    else cout<<"false"<<endl;
	}
   	
}
