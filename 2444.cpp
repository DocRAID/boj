#include<iostream>
int main(){
	int n,cnt=1;
	std::cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=n;j>i;j--){
			std::cout<<" ";
		}
		for(int j=0;j<cnt;j++){
			std::cout<<"*";
		}
		cnt+=2;
		std::cout<<"\n";
	}
	cnt-=4;
	for(int i=1;i<n;i++){
		for(int j=0;j<i;j++){
			std::cout<<" ";
		}
		for(int j=0;j<cnt;j++){
			std::cout<<"*";
		}
		cnt-=2;
		std::cout<<"\n";
	}
}