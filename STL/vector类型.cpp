#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int>arr(10,1);	//长度为100，初始值为1
	//vector<vector<vector<int>>>vec(5,vector<vector<int>>(6,vector<int>(4))); 
	arr.push_back(2);		//尾接一个元素
	for(int i=0;i<arr.size();i++){
		cout<<arr[i]<<" ";
	} 
	arr.pop_back();				//删除尾部一个元素
	cout<<endl;
	//.size() 获取目前的长度
	for(int i=0;i<arr.size();i++){
		cout<<arr[i]<<" ";
	} 
	cout<<endl;
	arr.clear();		//清空
	arr.push_back(3);
	for(int i=0;i<arr.size();i++){
		cout<<arr[i]<<" ";
	}  
	cout<<endl;
	cout<<arr.empty()<<endl;			//判断是否为空，0-false表示非空，1-true表示空
	arr.resize(8,2);			//重新定义长度，如果是缩短，则删除多余的值，如果是增长，新的长度为新的值 
	for(int i=0;i<arr.size();i++){
		cout<<arr[i]<<" ";
	}  
	vector<int>dp(108);
	for(int i=0;i<dp.size();i++){
		dp[i]=i;
	}
	vector<vector<vector<int> > >mat(5,vector<vector<int> >(6,vector<int>(7)));//三维的 
	//最好在声明的时候确定长度，这样在输入的时候不用一个一个push_back，能减少时间开销 
	return 0;
}
