#include<iostream>
int main(){
	int a,total=0;
	for(int i=0;i<5;i++){
		std::cin>>a;
		total += a*a;
	}
	std::cout<<total%10;
}