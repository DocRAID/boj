#include<iostream>
int main(){
	int n,arr[50][2]={0},result[50];
	std::cin>>n;
	for(int i=0;i<n;i++){
		std::cin>>arr[i][0]>>arr[i][1];
		result[i]=1;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(arr[i][0]<arr[j][0]&&arr[i][1]<arr[j][1]){
				result[i]++;
			}
		}
	}
	for(int i=0;i<n;i++){
		std::cout<<result[i]<<" ";
	}
}