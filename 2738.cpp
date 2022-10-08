#include<iostream>
int main(){
	int n,m;
	int arr[101][101]={0};
	int input;
	std::cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			std::cin>>input;
			arr[i][j]+=input;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			std::cin>>input;
			arr[i][j]+=input;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			std::cout<<arr[i][j]<<' ';
		}
		std::cout<<'\n';
	}
}