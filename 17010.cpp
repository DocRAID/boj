#include<iostream>
int main(){
	int n;
	std::cin>>n;
	for(int i=0;i<n;i++){
		int a;
		char b;
		std::cin>>a>>b;
		for(int j=0;j<a;j++){
			std::cout<<b;
		}
		std::cout<<'\n';
	}
}