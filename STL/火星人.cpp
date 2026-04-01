#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	vector<int> fingers(n);
	for(int i=0;i<n;i++){
		cin>>fingers[i];
	}
	//调用m次next_permutation,生成m个后续排列
	for(int i=0;i<m;i++){
		next_permutation(fingers.begin(),fingers.end()); 
	} 
	for(int i=0;i<n;i++){
		cout<<fingers[i];
		if(i!=n-1){
			cout<<" ";
		}
	}
	return 0; 
}
