#include <iostream>
#include <sstream>
#include <string>
using namespace std;
int checkIP(string ip){
//	cout<<"checkIP"<<endl;
	stringstream ss(ip);
	int i=0;
	string N[4];
	int num[4];
	while(getline(ss,N[i++],'.'));
	for(i=0;i<4;i++){
		if(N[i]==""){
			num[i]=-1;
			continue;
		}
		num[i]=stoi(N[i]);
//		cout<<num[i]<<endl;
	}
		if(num[0]==0) return 0;
		else if(num[0]>=1&&num[0]<=126&&num[1]>=0&&num[1]<=255&&num[2]>=0&&num[2]<=255&&num[3]>=0&&num[3]<=255){
			if(num[0]==10){
				return 6;
			}
			else return 1;
		
		}else if(num[0]>=128&&num[0]<=191&&num[1]>=0&&num[1]<=255&&num[2]>=0&&num[2]<=255&&num[3]>=0&&num[3]<=255){
			if(num[0]==172&&num[1]>=16&&num[1]<=31){
				return 7;
			}
			else return 2;
		}else if(num[0]>=192&&num[0]<=223&&num[1]>=0&&num[1]<=255&&num[2]>=0&&num[2]<=255&&num[3]>=0&&num[3]<=255){
			if(num[0]==192&&num[1]==168){
				return 8;
			}
			else return 3;
		}
		else if(num[0]>=224&&num[0]<=239&&num[1]>=0&&num[1]<=255&&num[2]>=0&&num[2]<=255&&num[3]>=0&&num[3]<=255){
			return 4;
		}
		else if(num[0]>=225&&num[0]<=255&&num[1]>=0&&num[1]<=255&&num[2]>=0&&num[2]<=255&&num[3]>=0&&num[3]<=255){
			return 5;
		}
		else return 0;
	
}
int checkMask(string mask,int ipType){
//	cout<<"checkMask"<<endl;
	stringstream ss(mask);
	int i=0;
	string N[4];
	int num[4];
	while(getline(ss,N[i++],'.'));
	for(i=0;i<4;i++){
		if(N[i]==""){
			num[i]=-1;
			continue;
		}
		num[i]=stoi(N[i]);
//		cout<<num[i]<<endl;
	}
	int flag=0;
	if((ipType==1||ipType==6)&&(num[0]!=255||num[1]!=0||num[2]!=0||num[3]!=0)) return 0;
	else if((ipType==2||ipType==7)&&(num[0]!=255||num[1]!=255||num[2]!=0||num[3]!=0))  return 0;
	else if((ipType==3||ipType==8)&&(num[0]!=255||num[1]!=255||num[2]!=255||num[3]!=0))  return 0;
	else 
	for(i=3;i>=0;i--){
		int temp=num[i];
//		cout<<"temp:"<<temp;
		while(temp){
//			cout<<"temp:"<<temp<<" ";
//			cout<<"temp:"<<temp<<endl;
			if((temp&1)&&flag==0) 
			flag=1;
			else if(flag==1&&!(temp&1))
			 return 0;
			temp=temp>>1;	
		}
	}
	return 1;
}
int main (){
    string str;
    int a[7]={0};
    while(getline(cin,str)){
    	stringstream ss(str);
		string ip[2],N[4];
    	int i=0;
		while(getline(ss,ip[i++],'~'));
		int flag1=checkIP(ip[0]);
		int flag2=checkMask(ip[1],flag1);
		if(flag1==1&&flag2==1) a[0]+=1;
		else if(flag1==2&&flag2==1) a[1]+=1;
		else if(flag1==3&&flag2==1) a[2]+=1;
		else if(flag1==4&&flag2==1) a[3]+=1;
		else if(flag1==5&&flag2==1) a[4]+=1;
		else if(flag1==6&&flag2==1){
			a[0]+=1;
			a[6]+=1;
		}
		else if(flag1==7&&flag2==1){
			a[1]+=1;
			a[6]+=1;
		}
		else if(flag1==8&&flag2==1){
			a[2]+=1;
			a[6]+=1;
		}else a[5]+=1;		
//		cout<<"while"<<endl;
//		for(int i=0;i<7;i++) cout<<a[i]<<" ";
	}
	for(int i=0;i<7;i++) cout<<a[i]<<" ";
    return 0;
}
