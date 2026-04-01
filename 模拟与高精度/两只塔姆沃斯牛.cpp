#include<iostream>
using namespace std;
int dx[4] = {-1,0,1,0};
int dy[4] = {0,1,0,-1};
int main(){
	char map[10][10];
	int cnt = 0;
	int cx,cy,fx,fy;
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			cin>>map[i][j];
			if(map[i][j] == 'C'){
				cx = i;
				cy = j;
			}
			else if(map[i][j] == 'F'){
				fx = i;
				fy = j;
			}
		}
	}
	int i = 0 , j = 0;
	while(cnt<160000){
		if(cx == fx && cy == fy){
			cout<<cnt<<endl;
			return 0;
		}
		int ncx = cx + dx[i];//是检查下一步 
		int ncy = cy + dy[i];
		if(ncx<0 || ncx>9 || ncy<0 || ncy>9 || map[ncx][ncy]=='*'){
			i = (i+1)%4;
		}
		else{
			cx = ncx;
			cy = ncy;
		}
		int nfx = fx + dx[j];
		int nfy = fy + dy[j];
		if(nfx<0 || nfx>9 || nfy<0 || nfy>9 || map[nfx][nfy]=='*'){
			j = (j+1)%4;
		}
		else{
			fx = nfx;
			fy = nfy;
		}
		cnt++;
	}
	cout<<0<<endl;
	return 0;
}
