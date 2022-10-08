#include <iostream>
int main(){
	int n;
	std::cin>>n;
	n%5==0?std::cout<<n/5:std::cout<<n/5+1;
}