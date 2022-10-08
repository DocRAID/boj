#include<iostream>
int main(){
	int n,m;
	std::cin>>n>>m;
	n/=2;
	m/=2;
	std::cout<<(n>m?m:n);
}