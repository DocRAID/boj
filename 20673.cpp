#include<iostream>
int main(){
	int a,b;
	std::cin>>a>>b;
	if(a<=50&&b<=10){
		std::cout<<"White";
	}
	else if(b>30){
		std::cout<<"Red";
	}
	else{
		std::cout<<"Yellow";
	}
}