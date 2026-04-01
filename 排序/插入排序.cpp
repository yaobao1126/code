#include<iostream>
#include<algorithm> 
using namespace std;
int main(){
	int a[520];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=1;i<n;i++){
		for(int j=i;j>=1;j--){
			if(a[j]<a[j-1]){
				swap(a[j],a[j-1]);
			}
			else{
				break;
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
