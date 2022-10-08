#include<iostream>
#include<algorithm>
int main(){
	int n;
	int arr[10]={0};
	std::cin>>n;
	for(int j=0;j<n;j++){
		for(int i=0;i<10;i++){
		std::cin>>arr[i];
	}
	std::sort(arr,arr+(10));

	std::cout<<arr[7]<<std::endl;	
	}
}