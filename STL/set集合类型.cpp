#include<bits/stdc++.h>
#include<set> 
using namespace std;
int main(){
	set<int>st1;	//从小到大
	set<int,greater<int> >st2;	//从大到小 
	
	set<int>st;
	st.insert(1);//插入元素
	st.insert(2);
	st.erase(2); //删除元素
	if(st.find(1)!=st.end()){
		cout<<"yes"<<endl;
	}
} 
