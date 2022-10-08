#include<iostream>
#include<queue>
#include<memory.h>
int vx[4]={1,-1,0,0};
int vy[4]={0,0,-1,1};
int map[50][50];
int v[50][50];
int w,h,cnt;
void bfs(int x,int y){
	std::queue<std::pair<int,int> >q;
	q.push({x,y});
	v[x][y]=1;
	cnt++;
	while(!q.empty()){
		int xx=q.front().first;
		int yy=q.front().second;
		q.pop();
		for(int i=0;i<4;i++){
			int xxx=xx+vx[i];
			int yyy=yy+vy[i];
			if(xxx>=0&&xxx<h&&yyy>=0&&yyy<w&&!v[xxx][yyy]&&map[xxx][yyy]){
				v[xxx][yyy]=cnt;
				q.push({xxx,yyy});
			}
		}
	}
}
void make_map(){
	//초기화를 해봅니다
	cnt=0;
	for(int i=0;i<50;i++){
		for(int j=0;j<50;j++){
			map[i][j]=0;
			v[i][j]=0;
		}
	}
	//배추의 개수를 받아서 심어욧
	int n,x,y;
	std::cin>>n;
	for(int i=0;i<n;i++){
		std::cin>>x>>y;
		map[x][y]=1;
	}
	//그리고 확인해욧
	for(int i=0;i<h;i++){
		for(int j=0;j<w;j++){
			if(map[i][j]&&!v[i][j]){
				bfs(i,j);
			}
		}
	}
}
int main(){
	int cntN;
	std::cin>>cntN;
	while(cntN--){
		std::cin>>h>>w;
		make_map();
		std::cout<<cnt<<'\n';
	}
	
}
