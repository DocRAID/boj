#include<iostream>
#include<cstring>
int main(){
	int a,b,ind1,ind2,ind3;
	std::cin>>a>>b;
	ind1=a/100;
	a%=100;
	ind2=a/10;
	ind3=a%10;
	a=(ind3*100)+(ind2*10)+ind1;
	
	ind1=b/100;
	b%=100;
	ind2=b/10;
	ind3=b%10;
	b=(ind3*100)+(ind2*10)+ind1;
	a>b?std::cout<<a:std::cout<<b;
}