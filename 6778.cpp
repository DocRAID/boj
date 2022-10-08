#include<iostream>
int main(){
	int n,m;
	std::cin>>n>>m;
	if(n>=3&&m<=4){
		std::cout<<"TroyMartian\n";
	}
	if(n<=6&&m>=2){
		std::cout<<"VladSaturnian\n";
	}
	if(n<=2&&m<=3){
		std::cout<<"GraemeMercurian\n";
	}
	
}