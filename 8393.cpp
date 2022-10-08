#include<iostream>
int main()
{
	int a,result=0;
	std::cin>>a;
	for(int i=0;i<=a;i++){
		result+=i;
	}	
	std::cout<<result;
}