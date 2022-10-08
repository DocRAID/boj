#include<iostream>
int main(){
	int n,cnt;
	std::cin>>n;
	cnt=n*2-1;
	for(int i=n;i>=1;i--){
		for(int j=0;j<n-i;j++){
			std::cout<<" ";
		}
		for(int j=0;j<cnt;j++){
			std::cout<<"*";
		}
		std::cout<<"\n";
		cnt-=2;
	}
}
