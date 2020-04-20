#include <iostream>
#include <string>
#include <sstream>
#include <map>
using namespace std;
int main (){
	int  n,a,b;
	map<int,int> m;
	while(cin>>n){
		for(int i=0;i<n;i++){
			cin>>a>>b;
			if(m.find(a)==m.cend()){
				m[a]=b;
			}
			else{
				m[a]+=b;
			}
		}
		for(auto i=m.cbegin();i!=m.cend();i++){
			cout<<i->first<<" "<<i->second<<endl;
		}
	}
	return 0;
} 
