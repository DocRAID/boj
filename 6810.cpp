#include<iostream>
int main(){
	int n,isbn[13]={9,7,8,0,9,2,1,4,1,8,0,0,0};
	std::cin>>isbn[10];
	std::cin>>isbn[11];
	std::cin>>isbn[12];
	n=0;
	for(int i=0;i<13;i++){
		i%2==0?n+=isbn[i]:n+=isbn[i]*3;
	}
	std::cout<<"The 1-3-sum is "<<n;
	
}