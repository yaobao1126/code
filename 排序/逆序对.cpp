#include<iostream>
#include<vector>
using namespace std;
typedef long long ll;	
ll mergesort(vector<int> &a,vector<int> &temp,int l,int r){
	if(l>=r) return 0;
	int mid = l + (r-l)/2;
	ll inv = mergesort(a,temp,l,mid) + mergesort(a,temp,mid+1,r);
	int i = l, j = mid + 1, k = l;
	while(i<=mid && j<=r){
		if(a[i]<=a[j]){
			temp[k++] = a[i++];
		}
		else{
			inv += mid-i+1;
			temp[k++] = a[j++];
		}
	}
	while(i<=mid) temp[k++] = a[i++];
	while(j<=r) temp[k++] = a[j++];
	for(int idx=l;idx<=r;idx++){
		a[idx] = temp[idx];
	}
	return inv;
}
int main(){
	
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	vector<int> temp(n);
	ll ans = mergesort(a,temp,0,n-1);
	cout<<ans<<"\n";
	return 0;
}
