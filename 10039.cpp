#include<iostream>
int main(){
	int arr[5],a=0;
	for(int i=0;i<5;i++){
		std::cin>>arr[i];
		if(arr[i]<40){
			arr[i]=40;
		}
		a+=arr[i];
	}
	std::cout<<a/5;
	
}