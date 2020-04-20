#include <iostream>
#include <string>
#include <vector>
using namespace std;
vector<vector<int>> ret;
vector<int> temp,nums;
int set[10000]={0},n=0;
void allSort(int deep){
	if(deep==n) {
		ret.push_back(temp);
//		for(int j=0;j!=temp.size();j++){
//			cout<<temp[j]<<" ";
//		}
//		printf("\n");
	}else{
		for(int i=0;i<nums.size();i++){
			if(set[i]==0){
				temp.push_back(nums[i]);
				set[i]=1;
				allSort(deep+1);
				temp.pop_back();
				set[i]=0;
			} 
		}
	}
}
int main()
{
    int num;
    while(cin>>num){
    	n++;
    	nums.push_back(num);
	}
	allSort(0);
	for(int i=0;i!=ret.size();i++){
		for(int j=0;j!=ret[i].size();j++){
			cout<<ret[i][j]<<" ";
		}
		cout<<endl;
	}
    return 0;
}

