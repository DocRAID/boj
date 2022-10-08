#include<iostream>
int pac(int n){
	if(n<=0){
		return 1;
	}
	return n*pac(n-1);
}
int main(){
	int n;
	std::cin>>n;
	std::cout<<pac(n);
}