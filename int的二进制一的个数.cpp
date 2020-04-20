#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <stack>
using namespace std;
int main (){
	int n,sum=0;
	cin>>n;
	while(n){
//		cout<<"n:"<<n<<endl;
		if(n&1) sum+=1;
		n=n>>1;	
	}
	cout<<sum<<endl;
	return 0;
} 
