#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main (){
	long num;
	while(cin>>num){
		while(num!=1){
			for(int i=2;i<=num;i++){
				if(num%i==0){
					cout<<i<<" ";
					num/=i;
					break;
				}
			}	
		}
		
	}
	return 0;
} 
