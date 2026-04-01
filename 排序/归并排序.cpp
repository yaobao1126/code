#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>& a,vector<int>& temp,int l,int mid,int r){
	int p1 = l,p2 = mid+1,p = l;
	while(p1<=mid && p2<=r){
		if(a[p1]<=a[p2]){
			temp[p++] = a[p1++];
		}
		else{
			temp[p++] = a[p2++];
		}
	}
	while(p1<=mid) temp[p++] = a[p1++];
	while(p2<=r) temp[p++] = a[p2++];
	for(int i=l;i<=r;i++){
		a[i] = temp[i];
	}
}
void mergesort(vector<int>& a,vector<int>& temp,int l,int r){
	if(l>=r) return;
	int mid = l + (r - l) / 2;
	mergesort(a,temp,l,mid);
	mergesort(a,temp,mid+1,r);
	merge(a,temp,l,mid,r);
}
int main(){
	int n;
	cin>>n;
	vector<int> a(n);
	vector<int> temp(n);
	for(auto& x : a) cin>>x;
	mergesort(a,temp,0,n-1);
	for(auto x : a) cout<<x<<" ";
	return 0;
} 
