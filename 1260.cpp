#include<iostream>
#include<queue>

int N,M,V;
int mat[1001][1001];
int visit[1001];

void dfs(int v){
	std::cout<<v<<' ';
	visit[v]=1;
	for(int i=1;i<=N;i++){
		if(visit[i]==1||mat[v][i]==0){
			continue;
		}
		dfs(i);
	}
}
void bfs(int v){
	std::queue<int> q;
	q.push(v);
	visit[v]=0;
	while(!q.empty()){
		v = q.front();
		std::cout<<q.front()<<' ';
		q.pop();
		for(int i=1;i<=N;i++){
			if(visit[i]==0||mat[v][i]==0){
				continue;
			}
			q.push(i);
			visit[i]=0;
		}
	}
}

int main(){
	int x,y;
	std::cin>>N>>M>>V;
	for(int i=0;i<M;i++){
		std::cin>>x>>y;
		mat[x][y] = mat[y][x]=1;
	}
	dfs(V);
	std::cout<<"\n";
	bfs(V);
	return 0;
}