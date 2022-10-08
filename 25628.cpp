#include<iostream>
int main() {
	int a,b;
	std::cin>>a>>b;
	a/=2;

	if(a<b){
		std::cout<<a;
	}
	else{
		std::cout<<b;
	}
}