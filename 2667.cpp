#include<iostream>
#include<stack>
#include<queue>
#include<algorithm>
int n,cnt=0,cntar[1000];
int arr[30][30];
//좌 우 위 아래 
int findX[4]={-1,1,0,0},findY[4]={0,0,1,-1};

void BFS(int startX,int startY){
	std::queue<std::pair<int,int> > qu;
	qu.push({startX,startY});
	arr[startY][startX]=0;
	int inCnt=1;
	while(!qu.empty()){
		for(int i=0;i<4;i++){
			int nowX=qu.front().first + findX[i];
			int nowY=qu.front().second + findY[i];
			if(nowX>=0&&nowX<n&&nowY>=0&&nowY<n&&arr[nowY][nowX]!=0){
				qu.push({nowX,nowY});
				inCnt++;
				arr[nowY][nowX]=0;
			}
		}
		qu.pop();
	}
	cntar[cnt]=inCnt;
	cnt++;
}

int main(){
	std::cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%1d",&arr[i][j]);
		}
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(arr[i][j]!=0){
				BFS(j,i);
			}
		}
	}
	//확 인  
//	std::cout<<std::endl;
//	for(int i=0;i<n;i++){
//		for(int j=0;j<n;j++){
//			std::cout<<arr[i][j];
//		}
//		std::cout<<std::endl;
//	}
	std::sort(cntar,cntar+cnt);
	std::cout<<cnt<<'\n';
	for(int i=0;i<cnt;i++){
		std::cout<<cntar[i]<<'\n';
	}
}