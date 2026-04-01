#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	vector<int> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	nth_element(a.begin(),a.begin()+k,a.end());
	cout<<a[k]<<endl;
	return 0;
}
