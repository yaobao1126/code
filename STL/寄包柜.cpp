#include<iostream>
#include<map>
using namespace std;
int main(){
	int n,q;
	cin>>n>>q;
	int opt,i,j,k;
	map<int,map<int,int> > locker;//二维的map，键为int，值为二维的值 
	while(q--){
		cin>>opt>>i>>j;
		if(opt==1){
			cin>>k;
			locker[i][j] = k;
		}
		else{
			cout<<locker[i][j]<<endl;
		}
	}
	return 0;
}

/*
auto it = map.find(5);
if(it != map.end()){
	cout<<"find it"<<it->first<<it->second<<endl;
}

for(auto &p : mp){
	cout<<p.first<<p.second<<endl;
}

*/
