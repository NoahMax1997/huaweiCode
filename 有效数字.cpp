#include <iostream> 
#include <sstream>
using namespace std;
int dotIndex(string);
string toStandard(string str){
	int i=0;
	int countDot=dotIndex(str);
	for(i=0;i<countDot;i++){
		if(str.at(i)!='0') break;
	}
	if(i>0) str=str.substr(i,str.length()-i);
	if(i==countDot) str="0"+str;
//	cout<<str<<endl;
	return str;
}
int isZero(string str){
	for(int i=0;i<str.length();i++){
		if(str.at(i)!='0'&&str.at(i)!='.') return 0;
	}
	return 1;
}
int dotIndex(string str){
	//寻找小数点位置 
	int ret=0;
	if(str.find('.')==string::npos) ret=str.length();
	else ret=str.find('.');
	return ret;
}
void completeStr(string& str,int n){
	//使有效数字为n 
	int len=str.length();
	if(len<n){
		for(int i=0;i<n-len;i++){
			str=str+"0";
		}	
	}else{
		str=str.substr(0,n);
	}
} 
string changeToSN(string str,int n,int countDot,int flag){
	//flag为1表示 小数点之前为0 
	string ret=str;
	if(flag){
		//小数点之前为0 
		int i=0;
		for(i=countDot+1;i<str.length();i++){
			if(str.at(i)!='0') break;
		} 
		ret=ret.substr(i,str.length()-i);
		completeStr(ret,n);
		if(i==countDot+1) ret="0."+ret;
		else{
			stringstream ss; 
			ss<<countDot+1-i;
			string t;
			ss>>t;
			ret="0."+ret+"*10^"+t;	
		}
	}else{
		//小数点之前不为0 
		ret.erase(countDot,1);
		completeStr(ret,n);
		stringstream ss; 
		ss<<countDot;
		string t;
		ss>>t;
		ret="0."+ret+"*10^"+t;	
	} 

	return ret;
}
int isEqual(string a,string b){
	int ret=1;
	if(a.length()!=b.length()) ret=0;
	else 
 	for(int i=0;i<a.length();i++){
		if(a.at(i)!=b.at(i)){
			ret=0;
			break;
		}
	}
	return ret;
}
int main (){
	int n,dotA,dotB;
	string a,b;
		cin>>n>>a>>b;
		a=toStandard(a);
		b=toStandard(b);
		//字符串分为小数点之前为0 或者不为0 
		int flag=0;
		if(isZero(a)){
			a="0.";
			for(int i=0;i<n;i++) a+="0";
			a+="*10^0";
		} 
		else{
			dotA=dotIndex(a);
			if(dotA==1&&a.at(0)=='0') flag=1;
			else flag=0;
			a=changeToSN(a,n,dotA,flag);
		}
		if(isZero(b)) {
			b="0.";
			for(int i=0;i<n;i++) b+="0";
			b+="*10^0";	
		}
		else{
			dotB=dotIndex(b);
			if(dotB==1&&b.at(0)=='0') flag=1;
			else flag=0;
			b=changeToSN(b,n,dotB,flag);
		}
		
		if(isEqual(a,b)){
			cout<<"YES "<<a<<endl;
		}else{
			cout<<"NO "<<a<<" "<<b<<endl;	
		}
	
	return 0;
}
