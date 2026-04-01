#include<iostream>
#include<vector>
using namespace std;
vector<int> match(205,-1);
int main(){
	vector<vector<int> > a(5,vector<int>(5));
	a[0][2] = a[0][3] = a[1][0] = a[1][3] = a[2][1] = a[2][4] = a[3][2] = a[3][4] = a[4][0] = a[4][1] = 1;
	int n,na,nb;
	cin>>n>>na>>nb;
	vector<int> a1(na);
	vector<int> a2(nb);
	for(int i=0;i<na;i++){
		cin>>a1[i];
	} 
	for(int i=0;i<nb;i++){
		cin>>a2[i];
	}
	for(int i=0;i<n;i++){
		int id1 = i%na;
		int id2 = i%nb;
		if(a[a1[id1]][a2[id2]] == 1){
			match[i] = 1;
		}
		else if(a[a1[id1]][a2[id2]] == 0 && a1[id1] != a2[id2]){
			match[i] = 0;
		} 
		else{
			match[i] = -1;//Æ½¾Ö 
		}
	}
	int w = 0, l = 0;
	for(int i=0;i<n;i++){
		if(match[i]!=-1){
			w += match[i];
			l += 1 - match[i];
		} 
	}
	cout<<w<<" "<<l<<endl;
	return 0;
}
