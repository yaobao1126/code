#include<iostream>
#include<queue>
#include<vector>
using namespace std;
const int maxn = 1005;
int main(){
	int m,n;
	cin>>m>>n;
	queue<int> q;
	vector<int> visited(maxn,0);
	int cnt = 0;
	while(n--){
		int val;
		cin>>val;
		if(q.size()<m){
			if(visited[val] == 0){
				q.push(val);
				visited[val] = 1;//表示已经存过这个单词 
				cnt++;
			}
		}
		else{
			if(visited[val] == 0){
				int temp = q.front();
				q.pop();
				visited[temp] = 0;
				visited[val] = 1;
				q.push(val);
				cnt++;
			}
		}
	}
	cout<<cnt<<endl;
	return 0;
}
