#include<bits/stdc++.h>
#include<queue>
using namespace std;
int main(){
	//提示：先进先出，不可访问内部元素
	queue<int>que;
	que.push(1);
	que.push(2);
	que.pop();
	int a=que.front();
	a=que.back(); 
	return 0;
} 
