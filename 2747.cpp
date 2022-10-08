#include<iostream>
#include<list>
int main(){
	long long arr[91]={0,1};
	for(int i=2;i<90;i++){
		arr[i]=arr[i-1]+arr[i-2];
	}
//	for(int i=0;i<90;i++){
//		std::cout<<arr[i]<<std::endl;
//	}
	int a;
	std::cin>>a;
	std::cout<<arr[a];
}