#include <iostream>
int main()
{
	int a,b,c,d,n=0,m=0;
	std::cin>>a>>b>>c>>d;
	m=a+b+c+d;
	n=m/60;
	m%=60;
	std::cout<<n<<"\n"<<m;
}