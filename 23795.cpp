#include<iostream>
int main(){
	int n,total=0;
	while(n!=-1){
		std::cin>>n;
		if(n==-1){
			break;
		}
		total+=n;
	}
	std::cout<<total;
}