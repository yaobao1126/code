#include<iostream>
using namespace std;
//冒泡排序：时间复杂度为O（n^2） 
int main(){
	int a[520];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	} 
	//每次都把最大的移到最右边 
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1-i;j++){
			if(a[j]>a[j+1]){
				int p=a[j];
				a[j]=a[j+1];
				a[j+1]=p;
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
