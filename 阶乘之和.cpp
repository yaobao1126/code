#include<iostream>
#include<vector> 
using namespace std;
vector<int> add(const vector<int>& a,const vector<int>& b){
	vector<int> res;
	int carry = 0;
	size_t i = 0;
	while(i<a.size() || i<b.size() || carry){
		if(i<a.size()) carry += a[i];
		if(i<b.size()) carry += b[i];
		res.push_back(carry % 10);
		carry /= 10;
		++i;
 	}
	return res;
}
vector<int> mul(const vector<int>& a,int b){
	vector<int> res;
	int carry = 0;//½øÎ» 
	for(int x : a){
		int t = x*b + carry;
		res.push_back(t%10);
		carry = t/10; 
	}
	while(carry){
		res.push_back(carry%10);
		carry /= 10;
	}
	return res;
}
int main(){
	vector<int> fact = {1};//1!=1
	vector<int> sum = {0};
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		fact = mul(fact,i);
		sum = add(sum,fact);
	}
	for(int i=sum.size()-1;i>=0;i--){
		cout<<sum[i];
	}
	return 0;
}
