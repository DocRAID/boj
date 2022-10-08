#include <iostream>
int main()
{
	int a,b=0;
	for(int i=0;i<5;i++){
		std::cin>>a;
		b+=a;
	}
	std::cout<<b;
}