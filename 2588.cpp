#include<iostream>
int main()
{
	int a,b,c;
	std::cin>>a>>b;
	c=a*b;
	std::cout<<a*(b%10)<<"\n";
	b/=10;
	std::cout<<a*(b%10)<<"\n";
	b/=10;
	std::cout<<a*(b%10)<<"\n"<<c;
	
}