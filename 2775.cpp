#include<iostream>
int arr[1000][14]={0};
int main(){
	int n,a,b;
	for(int i=0;i<1000;i++){
		for(int j=0;j<14;j++){
			if(i==0||j==0){
				arr[i][j]=j+1;
			}
			else{
				arr[i][j]= arr[i-1][j] + arr[i][j-1];
			}
		}
	}
	std::cin>>n;
	for(int i=0;i<n;i++){
		std::cin>>a>>b;
		std::cout<<arr[a][b-1]<<"\n";
	}
}