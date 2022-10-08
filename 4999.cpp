#include<iostream>
#include<string.h>
int main(){
	char a[999]={0},b[999]={0};
	std::cin>>a>>b;
	strlen(a)<strlen(b)?std::cout<<"no":std::cout<<"go";
}