#include<iostream>
#include<cstring>
int main(){
	char arr[100]={0};
	std::cin>>arr;
	for(int i=0;i<strlen(arr);i++){
		std::cout<<arr[i];
		if((i+1)%10==0){
			std::cout<<"\n";
		}
	}
}