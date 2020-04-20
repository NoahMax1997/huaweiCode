#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main (){
	double num;
	while(cin>>num){
		int a=(int)num;
		double b=num-a;
		if(b>=0.5) cout<<a+1<<endl;
		else cout<<a<<endl;	
	}
	return 0;
} 
