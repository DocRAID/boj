#include<iostream>
int main(){
	int arr[6]={1,1,2,2,2,8},result[6];
	for(int i=0;i<6;i++){
		std::cin>>result[i];
	}
	for(int i=0;i<6;i++){
		std::cout<<arr[i]-result[i]<<" ";
	}
}