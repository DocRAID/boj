#include<iostream>
int main(){
	int a,b,arr[5];
	std::cin>>a>>b;
	for(int i=0;i<5;i++){
		std::cin>>arr[i];
		std::cout<<arr[i]-(a*b)<<" ";
	}
}