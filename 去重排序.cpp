#include <iostream>
#include <string>
#include <set>
#include <sstream>
using namespace std;
struct SetIntCmp{//жиди()  set<int,SetIntCmp> ss(a,a+n);
	bool operator() (const int&left,const int& right){
		return right>left;
	}
};
int main (){
	int n;
	int* a=new int[1000];
	while(cin>>n){
		for(int i=0;i<n;i++){
			cin>>a[i];	
		} 
//		set<int,SetIntCmp> ss(a,a+n);
		set<int,SetIntCmp> ss(a,a+n);
		for(auto it=ss.cbegin();it!=ss.cend();it++){
			cout<<*it<<endl;
		}
	}
	return 0;
} 
