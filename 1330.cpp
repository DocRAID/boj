#include<iostream>
int main(){
	int a,b;
	std::cin>>a>>b;
	if(a>b){
		std::cout<<">";
	}
	if(a<b){
		std::cout<<"<";
	}
	if(a==b){
		std::cout<<"==";
	}
}