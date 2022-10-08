#include<iostream>
#include<cstring>
int main(){
	int n;
	std::cin>>n;
	n=5*n-400;
	std::cout<<n<<"\n"<<(n>100?-1:n==100?0:1);
}