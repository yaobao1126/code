#include<iostream>
#include<string>
#include<stack>
#include<vector>
using namespace std;
int main(){
	string s;
	cin>>s;
	int len = s.size();
	stack<int> st;//用于存入未匹配的左括号索引
	vector<bool> matched(105,false);
	for(int i=0;i<len;i++){
		char ch = s[i];
		if(ch == '(' || ch == '['){
			st.push(i);
			//左括号压栈 
		}
		else{
			//右括号
			if(!st.empty()){
				//如果栈为空的话，说明在这个右括号前面没有左括号
				int topch = st.top();
				if((ch == ')' && s[topch] == '(') || (ch == ']' && s[topch] == '[')){
					//匹配
					st.pop(); 
					matched[topch] = true;
					matched[i] = true;
				} 
			}
		}
	}
	for(int i=0;i<len;i++){
		if(matched[i] == true){
			cout<<s[i];
		}
		else{
			if(s[i] == '(' || s[i] == ')'){
				cout<<"()";
			}
			else{
				cout<<"[]";
			}
		}
	}
	cout<<endl;
	
	return 0;
}
