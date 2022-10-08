#include<iostream>
#include<queue>
#include<set> 
int arr[101][101];
int main(){
	int com,line;
	std::cin>>com>>line;
	for(int i=0;i<line;i++){
		int x,y;
		std::cin>>x>>y;
		arr[x][y]=1;
		arr[y][x]=1;
	}
	std::queue<int>qu;
	std::set<int>st;
	qu.push(1);
	int cnt=0;
	while(!qu.empty()){
		int now = qu.front();
		for(int i=1;i<=100;i++){
			if(arr[now][i]==1){
				st.insert(i);
				qu.push(i);
				arr[i][now]=arr[now][i]=0;
				cnt++;
			}
		}
		qu.pop();
	}
	std::cout<<st.size();
}