#include<iostream>
#include<queue>
#include<memory.h>
int vx[8] = {0,1,1,1,0,-1,-1,-1};
int vy[8] = {-1,-1,0,1,1,1,0,-1};
int map[50][50];
int v[50][50];
int w,h;
int cnt=0;
void bfs(int x,int y){
	cnt++;
	std::queue<std::pair<int, int> > q;
	q.push({x,y});
	v[x][y]=cnt;
	while(!q.empty()){
		int xx=q.front().first;
		int yy=q.front().second;
		q.pop();
		for(int i=0;i<8;i++){
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
	for(int i=0;i<h;i++){
		for(int j=0;j<w;j++){
			std::cin>>map[i][j];
		}
	}
	for(int i=0;i<h;i++){
		for(int j=0;j<w;j++){
			if(!v[i][j]&&map[i][j]){
				bfs(i,j);
			}
		}
	}
	std::cout<<cnt<<'\n';
	cnt=0;
	memset(map,0,sizeof(map));
	memset(v,0,sizeof(v));
}
int main(){
	while(1){
		std::cin>>w>>h;
		if(w==0 && h==0){
			break;
		}
		make_map();
		
	}
	
}