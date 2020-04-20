#include <iostream> 
#include <math.h>
#include <algorithm>
using namespace std;
int main() {
    int n;
    while(cin>>n){
    	if(n==0) break;
    	int sum=0;
    	while(n>=3){
    		n-=3;
    		sum++;
    		n++;
		}
    	if(n==2) sum++;
    	cout<<sum<<endl;
	}
}
