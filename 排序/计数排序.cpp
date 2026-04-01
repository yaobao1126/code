#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	vector<int> a(n,0);
	for(int i=0;i<m;i++){
		int temp;
		cin>>temp;
		a[temp]++;
	}
	for(int i=1;i<=n;i++){
		for(int j=0;j<a[i];j++){
			cout<<i<<" ";
		}
	}
	return 0;
}
