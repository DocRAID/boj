#include<iostream>
#include<algorithm>
int main(){
	int n;
	std::cin>>n;
	for(int i=n;i>0;i--){
		for(int j=n;j>i;j--){
			std::cout<<" ";
		}
		for(int j=i;j>0;j--){
			std::cout<<"*";
		}
		std::cout<<"\n";
	}
}
