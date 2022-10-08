#include<iostream>
#include<stdio.h>
int main() {
	double in;
	std::cin>>in;
	printf("%.0f %.0f",in*0.78,in*0.8+in*0.2*0.78);
//	std::cout<<in*0.78<<' ';
//	std::cout<<in*0.8+in*0.2*0.78;
}