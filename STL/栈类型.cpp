#include<bits/stdc++.h>
#include<stack>
using namespace std;
//栈结构 ,先进后出 
int main(){
	//提示：栈是不可以访问内部结构的
	stack<int>stk;//声明
	stk.push(1);//进栈
	stk.pop();//出栈
	int a=stk.top();//取栈顶 
	return 0;
}
