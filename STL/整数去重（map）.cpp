#include<iostream>
#include<map>
using namespace std;
int main(){
	int n;
	cin>>n;
	map<int,int> m;
	/*去重部分 
	for(int i=0;i<n;i++){
		int t;
		cin>>t;
		if(m[t]==0){
			cout<<t<<" ";
		}
		m[t]=1;
	}*/ 
	
	for(int i=0;i<n;i++){
		cin>>m[i];
	}
	cout<<m.count(3)<<endl;  //这个3找的是键，在map中只能为0/1；
	m.erase(2);              //erase过后变为0 
	if(m.find(2)!=m.end()){  //依旧找的是键而不是键对应的那个元素 
		cout<<"yes"<<endl;
	}
	else{
		cout<<"no"<<endl;
	}
	for(int i=0;i<n;i++){
		cout<<m[i]<<" ";
	}//输入输出
	 
} 
