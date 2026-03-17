#include<iostream>
#include<string>
#include<algorithm> 
int a1[520],a2[520],a3[520]={0};
using namespace std;
int main(){
	string s1,s2;
	getline(cin,s1);
	getline(cin,s2);
	for(int i=0;i<s1.size();i++){
		a1[i]=s1[s1.size()-1-i]-'0';
	}
	for(int i=0;i<s2.size();i++){
		a2[i]=s2[s2.size()-1-i]-'0';
	}
	int len=max(s1.size(),s2.size());
	for(int i=0;i<len;i++){
		a3[i]=a1[i]+a2[i];
	}
	for(int i=0;i<len;i++){
		if(a3[i]>=10){
			a3[i+1]+=a3[i]/10;
			a3[i]=a3[i]%10;
		}
	}
	if(a3[len]!=0){
		len++;
	}
	for(int i=len-1;i>=0;i--){
		cout<<a3[i];
	} 
	return 0;
}
