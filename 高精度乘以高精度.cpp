#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int a1[5010],a2[5010],a3[5010]={0};
int main(){
	string s1,s2;
	cin>>s1;
	cin>>s2;
	for(int i=0;i<s1.size();i++){
		a1[i]=s1[s1.size()-1-i]-'0';
	}
	for(int i=0;i<s2.size();i++){
		a2[i]=s2[s2.size()-1-i]-'0';
	}
	int len = s1.size()+s2.size();
	for(int i=0;i<s1.size();i++){
		for(int j=0;j<s2.size();j++){
			a3[i+j]+=a1[i]*a2[j];
		}
	}
	for(int i=0;i<len;i++){
		if(a3[i]>=10){
			a3[i+1]+=a3[i]/10;
			a3[i]%=10;
		}	
	}
	int index=0;
	for(int i=len-1;i>=0;i--){
		if(a3[i] != 0){
			index=i;
			break;
		}
	}
	for(int i=index;i>=0;i--){
		cout<<a3[i];
	}
	return 0;
}
