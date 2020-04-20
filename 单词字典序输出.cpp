#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <stack>
using namespace std;
int main (){
	int n;
	string str;
	map<string,int> M;
	cin>>n;
	while(n--){
		cin>>str;
		if(M.find(str)==M.cend()) M[str]=1;
		else M[str]+=1;
	}
	for(auto i=M.cbegin();i!=M.cend();i++){
		for(int j=0;j<i->second;j++){
			cout<<i->first<<endl;
		}
	}
	return 0;
} 
