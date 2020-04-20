#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <stack>
using namespace std;
int main (){
	string str,end="";
	getline(cin,str);
//	cout<<str;
	stringstream ss(str);
    stack<string> S;
    while(ss>>str){
        S.push(str);
    }
    do{
        end+=S.top()+" ";
        S.pop();
    }while(!S.empty());
    end.erase(end.length()-1);
     cout<<end<<endl;  
    
	return 0;
} 
