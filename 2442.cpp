#include<iostream>
int main(){
	int n,cnt=1;
	std::cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=0;j<n-i;j++){
			std::cout<<" ";
		}
		for(int j=0;j<cnt;j++){
			std::cout<<"*";
		}
		std::cout<<"\n";
		cnt+=2;
	}
}