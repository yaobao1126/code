#include<iostream>
#include<cmath>
#define a1 25*2500
using namespace std;
int m[2]={11,21};		//两种赛制
int a[a1+10];			//用来存储比赛结果 
int main(){
	char c;
	int n;			//统计比赛局数			
	while(1){
		cin>>c;
		if(c=='E') break;
		else if(c=='W'){
			a[n++]=1;		//赢 
		}
		else if(c=='L'){
			a[n++]=0;		//输 
		}
	}
	for(int i=0;i<2;i++){
		int w=0;
		int l=0;
		for(int j=0;j<n;j++){
			w+=a[j];
			l+=1-a[j];			//很diao的一种计分方式，刚刚好错开
			if( max(w,l)>=m[i] && abs(w-l)>=2 ){
				cout<<w<<":"<<l<<endl;
				w=l=0;		//一局结束后清空 
			} 
		}
		cout<<w<<":"<<l<<endl;
		cout<<endl;				//没比完一整局 
	}
	return 0;
}
