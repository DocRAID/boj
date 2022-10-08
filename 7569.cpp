#include<iostream>
#include<queue>
int arr[100][100][100];
int findX[6]={-1,1,0,0,0,0};
int findY[6]={0,0,1,-1,0,0};
int findZ[6]={0,0,0,0,1,-1};
int x,y,z;
std::queue<int> qu1,qu2,qu3; //x y z
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
	while(!qu1.empty()){
		int indexX=qu1.front(),indexY=qu2.front(),indexZ=qu3.front();
		for(int i=0;i<6;i++){
			int nowX= indexX + findX[i];
			int nowY= indexY + findY[i];
			int nowZ= indexZ + findZ[i];
			if(nowX>=0&&nowX<x&&nowY>=0&&nowY<y&&nowZ>=0&&nowZ<z&&arr[nowZ][nowY][nowX]==0){
				qu1.push(nowX);
				qu2.push(nowY);
				qu3.push(nowZ);
				//dayCnt++;
				arr[nowZ][nowY][nowX]=arr[indexZ][indexY][indexX]+1;
			}
		}
		qu1.pop();
		qu2.pop();
		qu3.pop();
//		print();
	}
	int max=0;
	for(int l=0;l<z;l++){
		for(int i=0;i<y;i++){
			for(int j=0;j<x;j++){
				if(arr[l][i][j]==0){
					std::cout<<-1;
					return;
				}
				if(max<arr[l][i][j]){
					max=arr[l][i][j];
				}
			}
		}
	}
	std::cout<<max-1;
	
}
int main(){
	std::cin>>x>>y>>z;
	for(int l=0;l<z;l++){
		for(int i=0;i<y;i++){
			for(int j=0;j<x;j++){
				std::cin>>arr[l][i][j];
				if(arr[l][i][j]==1){
					qu1.push(j);
					qu2.push(i);
					qu3.push(l);
				}
			}
		}
	}
	BFS();
}