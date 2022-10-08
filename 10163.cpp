#include<iostream>
int arr[1001][1001],result[100];//y,x
void paint(int x,int y,int w,int h,int in){
	for(int i=x;i<x+w;i++){
		for(int j=y;j<y+h;j++){
//			std::cout<<i<<' '<<j<<'\n';
			arr[i][j]=in+1;
		}
	}
}
int main(){
	std::ios_base :: sync_with_stdio(false); 
	std::cin.tie(NULL); 
	std::cout.tie(NULL);
	int n;
	std::cin>>n;
	for(int i=0;i<n;i++){
		int x,y,w,h;
		std::cin>>x>>y>>w>>h;
		paint(x,y,w,h,i);
	}
	for(int i=0;i<1000;i++){
		for(int j=0;j<1000;j++){
			if(arr[i][j]!=0){
				result[arr[i][j]-1]++;
			}
		}
	}
	for(int i=0;i<n;i++){
		std::cout<<result[i]<<'\n';
	}
}