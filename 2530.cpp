#include<iostream>
int main(){
	int min,hour,n,sec;
	std::cin>>hour>>min>>sec>>n;
	sec+=n;
	min+= sec/60;
	sec%=60;
	hour+= min/60;
	min%=60;
	hour%=24;
	std::cout<<hour<<" "<<min<<" "<<sec;
}