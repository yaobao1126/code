#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
const int maxn = 25;
const int maxtime = 100000;
int main(){
	int m,n;
	cin>>m>>n;
	vector<int> sequence(m*n+1);
	for(int i=1;i<=m*n;i++){
		cin>>sequence[i];
	}
	int machine_info[maxn][maxn];//记录每个工件对应工序要在哪台机器上完成 
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>machine_info[i][j];
		}
	}
	//记录每道工序需要花费的时间 
	int time[maxn][maxn];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>time[i][j];
		}
	}
	//记录机器在某个时间点是否被占用,初始为false 
	vector<vector<bool> > timeline(m+1,vector<bool>(maxtime,false));
	
	//记录工件job上一道工序的完成时间 
	vector<int> last_finish_time(n+1,0);
	
	//记录工件下一步要做的步骤（初始化为1）因为所有工件都从1开始
	vector<int> current_step(n+1,1);
	for(int i=1;i<=m*n;i++){
		int current_job = sequence[i];//当前安排的工件
		int step = current_step[current_job];//第几道工序
		int machine = machine_info[current_job][step];//这一步使用的机器
		int duration = time[current_job][step];//这一步需要的时间
		
		int start = last_finish_time[current_job] + 1;
		int found_start = -1;//记录找到的开始时间
		//在机器的时间轴上寻找连续的空闲时间段
		for(int t=start;t<maxtime;t++){
			bool is_idle = true;
			//从t开始的duration个时间是否空闲
			for(int k=0;k<duration;k++){
				if(timeline[machine][t+k]){
					is_idle = false;
					break;
				}
			}
			if(is_idle){
				found_start = t;
				break;
			}
		} 
		if(found_start != -1){
			for(int k=0;k<duration;k++){
				timeline[machine][found_start+k] = true;
			}
			last_finish_time[current_job] = found_start + duration - 1;
		}
		current_step[current_job]++;
	} 
	int ans = 0;
	for(int i=1;i<=n;i++){
		ans = max(ans,last_finish_time[i]);
	}
	cout<<ans<<endl;
	return 0;
}
