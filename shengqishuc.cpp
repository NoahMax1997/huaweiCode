#include <iostream>
using namespace std;
int isZ(int t){
	for(int i=2;i<t/2;i++){
		if(t%i==0) return 0;
	}
	return 1;
}
int main() {
    int a,b,sum=0,c[100]={0};
    cin>>a>>b;
    for(int i=a;i<=b;i++){
    	c[100]={0};
    	int n=0;
    	int t=i;
    	while(t!=0){
	    	c[n]=t%10;
	    	n++;
	    	t/=10;
		}
		int flag=0;
		for(int j=0;j<n;j++){
			if(flag) break;
			for(int k=j+1;k<n;k++){
				if(c[j]!=0){
					int temp=c[j]*10+c[k];
					if(isZ(temp)){
						flag=1;
						break;
					} 
				}
				if(c[k]!=0){
					int temp=c[k]*10+c[j];
					if(isZ(temp)){
						flag=1;
						break;
					} 
				}
			}
		}
		if(flag) sum++;
	}
	cout<<sum<<endl;
}
