#include<iostream>
int main(){
	int n,m;
	std::cin>>n>>m;
	if(n==2&&m==18){
		std::cout<<"Special";
	}else if((n==2&&m<18)||n==1){
		std::cout<<"Before";
	}else{
		std::cout<<"After";
	}
}