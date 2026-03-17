#include<iostream>
#include<string>
using namespace std;
const int num=1e6+5;
struct man{
	int dir;
	string job;
}man1[num];
int n,m,x,y;
int main(){
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>man1[i].dir>>man1[i].job;
	}
	int t=0;
	for(int i=1;i<=m;i++){
		cin>>x>>y;
		if( (x==0) && (man1[t].dir==0) ){
			t=(t+n-y)%n;
		}
		else if( (x==0) && (man1[t].dir==1) ){
			t=(t+y)%n;
		}
		else if( (x==1) && (man1[t].dir==0) ){
			t=(t+y)%n;
		}
		else if( (x==1) && (man1[t].dir==1) ){
			t=(t+n-y)%n;
		}
	}
	cout<<man1[t].job;
	return 0;
} 
