#include<iostream>
using namespace std;
int const g=105;
char a[g][g];
int dx[8]={-1,-1,-1,0,0,1,1,1};
int dy[8]={-1,0,1,-1,1,-1,0,1};
int main(){
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			int cnt=0;
			if(a[i][j] != '*'){
				for(int k=0;k<8;k++){
					if(a[i+dx[k]][j+dy[k]] == '*'){
						cnt++;
					}
				}
				cout<<cnt;
			}
			else cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
