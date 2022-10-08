#include<iostream>
#include<stdio.h>
int main(){
	double a,b;
	std::cin>>a>>b;
	b=(b*2)*3.141592;
	printf("%.7f",b+(2*a));
}