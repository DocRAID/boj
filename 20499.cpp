#include<iostream>
int main(){
	int K,D,A;
	char a;
	std::cin>>K>>a>>D>>a>>A;
	std::cout<<(K+A>=D&&D!=0?"gosu":"hasu");
}