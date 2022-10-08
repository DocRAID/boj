#include<iostream>
#include<queue>
int arr[1000][1000];
int findX[4]={-1,1,0,0},findY[4]={0,0,1,-1};
int x,y;
std::queue<std::pair<int,int> > qu;
//void print(){
//	for(int i=0;i<y;i++){
//		for(int j=0;j<x;j++){
//			std::cout<<arr[i][j]<<' ';
//		}
//		std::cout<<std::endl;
//	}
//	std::cout<<std::endl;
//}
void BFS(){
//	qu.push({startX,startY});
//	arr[startY][startX]=1;
	int dayCnt=0; // day가 얼마나 지났니  
	while(!qu.empty()){
		int indexX=qu.front().first,indexY=qu.front().second;
		for(int i=0;i<4;i++){
			int nowX= indexX + findX[i];
			int nowY= indexY + findY[i];
			if(nowX>=0&&nowX<x&&nowY>=0&&nowY<y&&arr[nowY][nowX]==0){
				qu.push({nowX,nowY});
				//dayCnt++;
				arr[nowY][nowX]=arr[indexY][indexX]+1;
			}
		}
		qu.pop();
//		print();
	}
	int max=0;
	for(int i=0;i<y;i++){
		for(int j=0;j<x;j++){
			if(arr[i][j]==0){
				std::cout<<-1;
				return;
			}
			if(max<arr[i][j]){
				max=arr[i][j];
			}
		}
	}
	std::cout<<max-1;
	
}
int main(){
	std::cin>>x>>y;
	int indexX,indexY;
	for(int i=0;i<y;i++){
		for(int j=0;j<x;j++){
			std::cin>>arr[i][j];
			if(arr[i][j]==1){
				qu.push({j,i});
			}
		}
	}
	BFS();
}