#include<iostream>
#include<queue>
int n,m;
bool arr[1001][1001];
int cnt=0;
void BFS(int start){
	cnt++;
	std::queue<int>qu;
	qu.push(start);
	while(!qu.empty()){
		for(int i=1;i<=n;i++){
			if(arr[qu.front()][i]==true){
				qu.push(i);
				arr[qu.front()][i]=arr[i][qu.front()]=false;
			}
		}
		qu.pop();
	}
}
int main(){
	std::cin>>n>>m;
	int x,y;
	for(int i=0;i<m;i++){
		std::cin>>x>>y;
		arr[x][y]=arr[y][x]=true;
	}
	for(int i=1;i<=n;i++){
		arr[i][i]=true;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(arr[i][j]==true){
				BFS(i);
				break;
			}
		}
	}
	std::cout<<cnt;
}