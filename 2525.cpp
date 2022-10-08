#include<iostream>
int main(){
	int min,hour,n;
	std::cin>>hour>>min>>n;
	min+=n;
	hour+= min/60;
	min%=60;
	hour%=24;
	std::cout<<hour<<" "<<min;
}