#include<iostream>
int main(){
	int num=0,layer=0;
	std::cin>>num;
	for(int sum=2;sum<=num;layer++)
		sum += 6*layer;
	if(num==1){
		layer=1;
	}
	std::cout<<layer;
}	