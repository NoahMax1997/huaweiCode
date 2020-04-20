#include <iostream>
#include <sstream>
#include <typeinfo>
#include <map>
#include <stack>
using namespace std;
typedef struct node{
	int line;
	string str;
	int flag=0;
//	int time=0;
}Node;
Node list[1000];
stack<Node> ss;
int time(Node node,int n){
	//在n之前有多少个与n一样的记录 
	int sum=1;
	for(int i=0;i<n;i++){
		if(node.str==list[i].str&&node.line==list[i].line){
			sum++;
			list[i].flag=1;
		}
	}
	return sum;	
}
int main (){
	string str1;
	int line1;
	int n=0;
	while(cin>>str1>>line1){
//		if(line1==0) break;
		int index=str1.find_last_of('\\');
		str1=str1.substr(index+1,str1.length()-index);
//		cout<<"substr:"<<str1<<endl;
		if(str1.length()>16) str1=str1.substr(str1.length()-16,16);
		list[n].str=str1,list[n].line=line1,list[n].flag=0;
		n++;
	}
	int temp=0;
	for(int i=n-1;i>=0;i--){
		if(temp==8) break;
		if(list[i].flag==0){
			Node n;
			n.str=list[i].str,n.line=list[i].line,n.flag=time(list[i],i);
			ss.push(n);
			temp++;
		}	
	}
	while(!ss.empty()){
		Node n=ss.top();
		cout<<n.str<<" "<<n.line<<" "<<n.flag<<endl;
		ss.pop();	
	}
	return 0;
}
