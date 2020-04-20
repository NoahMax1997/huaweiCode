#include <iostream>
#include <string>
#include <vector>
#include <stack>
using namespace std;
vector<vector<int>> ret;
vector<int> temp,nums;
stack<int> ss;
int set[10000]={0},n=0;
vector<vector<int>> permute(vector<int>& nums) {
    int deep=0,flag=1;
	while(1){
		if(ss.size()<n){
			for(int j=0;j<nums.size();j++){
				if(set[j]==0){
					ss.push(j);
					temp.push_back(nums[j]);
				}
			}	
		}
		else{
			ret.push_back(temp);
			for(int i=0;i<temp.size();i++) cout<<temp[i]<<" ";
			printf("\n");
			set[ss.top()]=0;
			ss.pop();
			temp.pop_back();	
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
	ret=permute(nums);
	for(int i=0;i!=ret.size();i++){
		for(int j=0;j!=ret[i].size();j++){
			cout<<ret[i][j]<<" ";
		}
		cout<<endl;
	}
    return 0;
}

