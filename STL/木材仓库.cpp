#include<iostream>
#include<set>
#include<cmath>
using namespace std;
int main(){
	int n;
	cin>>n;
	int opt,length;
	set<int> st;
	while(n--){
		cin>>opt>>length;
		if(opt==1){
			if(st.find(length)!=st.end()){//存在 
				cout<<"Already Exist"<<endl;
			}
			else{
				st.insert(length);
			}
		}
		else{
			if(st.empty()){
				cout<<"Empty"<<endl;
				continue; 
			}
			auto it = st.find(length);
			if(it != st.end()){
				cout<<length<<endl;
				st.erase(it);
				continue;
			}
			//如果没有找到，就用lower_bound找到>=length的迭代器
			it = st.lower_bound(length);
			if(it == st.end()){
				//如果length比仓库里面所有的木材都长
				it = prev(st.end());
				cout<<*it<<endl;
				st.erase(it);
			} 
			else if(it == st.begin()){
				//如果仓库里面所有的木材都比length长
				it = st.begin();
				cout<<*it<<endl;
				st.erase(it);
			}
			else{
				//中间情况
				int greater = *it;
				int smaller = *prev(it);
				if(abs(greater-length) < abs(smaller-length)){
					cout<<greater<<endl;
					st.erase(it);
				} 
				else{
					cout<<smaller<<endl;
					st.erase(prev(it));
				}
			}
		}
	}
	return 0;
} 
