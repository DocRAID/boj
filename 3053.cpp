#include <iostream>
#include<stdio.h>
int main() {
	double pi=3.14159265359;
	double a;
	std::cin>>a;
	// std::cout<<pi*a*a<<'\n'<<a*a*2;
	printf("%.6lf\n%.6lf",pi*a*a,a*a*2);
}