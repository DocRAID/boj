#include<iostream>
int main() {
	int a,b;
	while(std::cin>>a>>b){
		std::cout<<b/(a+1)<<'\n';
	}
}