#include<iostream>
#include<algorithm>
using namespace std;
#define maxn 310
struct student{
	int total;
	int chinese;
	int id;
}stud[maxn];

int cmp(student a,student b){
	if(a.total!=b.total) return a.total>b.total;
	if(a.chinese != b.chinese) return a.chinese>b.chinese;
	return a.id<b.id;
}

int main(){
	int n;
	cin>>n;
	int math,english;
	for(int i=0;i<n;i++){
		cin>>stud[i].chinese>>math>>english;
		stud[i].total=stud[i].chinese+math+english;
		stud[i].id=i+1;
	}
	sort(stud,stud+n,cmp);
	for(int i=0;i<5;i++){
		cout<<stud[i].id<<" "<<stud[i].total<<endl;
	}
	return 0;
}
