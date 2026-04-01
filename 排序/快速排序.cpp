#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void qsort(vector<int>& a,int l,int r){
	int mid = l + (r-l) / 2;
	int p = a[mid];
	int i=l,j=r;
	while(i<=j){
		while(a[i]<p) i++;
		while(a[j]>p) j--;
		if(i<=j){
			swap(a[i],a[j]);
			i++;
			j--;
		}
	}
	if(l<j) qsort(a,l,j);
	if(r>i) qsort(a,i,r);
}
int main(){
	int n;
	cin>>n;
	vector<int> a(n);
	for(auto& x:a) cin>>x; 
	qsort(a,0,n-1);
	for(auto x:a) cout<<x<<" ";	
} 
