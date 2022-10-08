#include<iostream>
int main(){
	double a,b;
	std::cin>>a>>b;
	if(100<= a-(a*(b/100))){
		std::cout<<0;
	}else{
		std::cout<<1;
	}
}