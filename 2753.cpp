#include<iostream>
int main(){
	int a;
	int youn=0;
	std::cin>>a;
	if(a%4==0 && a%100!=0){
		youn=1;
	}
	if(a%400==0){
		youn=1;
	}
	std::cout<<youn;
}