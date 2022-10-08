#include<iostream>
int main(){
	int n,limit,max=0,arr[101]={0};
	std::cin>>n>>limit;
	for(int i=0;i<n;i++){
		std::cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n&&j!=i;j++){
			for(int l=0;l<n&&l!=i&&l!=j;l++){
				if(arr[i]+arr[j]+arr[l]<=limit&&arr[i]+arr[j]+arr[l]>max){
					max=arr[i]+arr[j]+arr[l];
					if(max==limit){
						std::cout<<max;
						return 0;
					}
				}
			}
		}
	}
	std::cout<<max;
}