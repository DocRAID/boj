#include<iostream>
int main(){
	long long a,b;
	int cost;
	std::cin>>a>>b;
	std::cin>>cost;
	cost*=2;
	if(a+b>=cost){
		std::cout<<a+b-cost;
	}
	else {
		std::cout<<a+b;
	}
}