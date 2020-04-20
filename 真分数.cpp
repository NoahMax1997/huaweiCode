#include <iostream>
#include <bits/stdc++.h>
#include <stdio.h>
#include <sstream>
#include <string>
using namespace std;
int commonNum(int a,int b);
int split(int a,int b){
//	printf("in split");
//	cout<<a<<" "<<b<<" ";
	int i;
	return b/a+1;
//	cout<<i<<endl;
}
int commonNum(int a,int b){
//	printf("in commonNum\n");
	int p=a*b;
	if(a<b){
		int temp=a;
		a=b;b=temp;
	}
//	printf("%d %d\n",a,b);
	while(b!=0){
		int r=a%b;
		a=b;
		b=r;
	}
//	cout<<"max"<<a<<endl;
//	cout<<" min"<<p/a<<endl;
	return p/a;
}
int main(){
    string a;
//    cout<<split(3,110)<<"sp"<<endl;
//    int test=0;
//    cout<<split(8,11);
    while(cin>>a){
    	string end="";
    	int index=a.find('/');
    	string str1=a.substr(0,index);
		string str2=a.substr(index+1,a.length());
//    	cout<<str1<<"  "<<str2<<endl;
    	istringstream iss(str1+" "+str2);
    	int t1,t2;
    	iss>>t1;
    	iss>>t2;
//    	cout<<"t1:"<<t1<<"t2:"<<t2<<endl;
		while(t1!=1) {
			if(commonNum(t1,t2)==t2){
				t2=t2/t1;t1=1;
			}
			else{
				int t=split(t1,t2);
				end+="1/"+to_string(t)+"+";
				int minNum=commonNum(t,t2);
				t1=t1*(minNum/t2)-(minNum/t);t2=minNum;
			}
//			cout<<"t1: "<<t1<<" t2: "<<t2<<" t:"<<t<<endl; 
		}
		end+="1/"+to_string(t2);
		cout<<end<<endl;
		
	}
}
