#include<iostream>
int main(){
	long long a,b;
	std::cin>>a>>b;
	a>b?std::cout<<a-b:std::cout<<-1*(a-b);
}