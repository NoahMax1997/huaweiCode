#include <iostream> 
#include <math.h>
#include <algorithm>
using namespace std;
int main() {
    int n,sum=0;;
    long long a[100005]={0};
    cin>>n;
    for(int i=0;i<n*3;i++) cin>>a[i];
    sort(a,a+n*3);
    int left=0,right=n*3-1;
    for(int i=0;i<n*3;i++){
    	if(left<right){
    		left++;right--;
    		sum+=a[right--];
		}
	} 
	cout<<sum<<endl;
}
