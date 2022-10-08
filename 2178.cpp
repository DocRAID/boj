#include<iostream>
#include<queue>
#define MAX 100
int n,m;
int map[MAX][MAX];
int cnt[MAX][MAX];
int dx[4]={1,-1,0,0},dy[4]={0,0,-1,1};
void bfs(int x,int y){
	//queue에 넣는 조건 방문x, 좌표가 0 이상
	cnt[x][y]=1;
	std::queue<int> qx;
	std::queue<int> qy;
	
	qx.push(x);
	qy.push(y);
	while(!qx.empty()&&!qy.empty()){
		int xx=qx.front();
		int yy=qy.front();
		qx.pop();
		qy.pop();
		for(int i=0;i<4;i++){
			int nx=xx+dx[i];
			int ny=yy+dy[i];
			if(nx>=0 && ny>=0 && nx<n && ny<m && map[nx][ny]!=0&&cnt[nx][ny]==0){
				qx.push(nx);
				qy.push(ny);
				cnt[nx][ny]=cnt[xx][yy]+1;
			}
		}
	}
}
int main(){
	std::cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%1d",&map[i][j]);
		}
	}
	bfs(0,0);
	std::cout<<cnt[n-1][m-1];
}
