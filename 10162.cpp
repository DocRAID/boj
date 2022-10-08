#include<iostream>
int main(){
	int n,a,b,c;
	std::cin>>n;
	a=n/300;
	n%=300;
	b=n/60;
	n%=60;
	c=n/10;
	n%=10;
	if(n==0){
		std::cout<<a<<" "<<b<<" "<<c;
	}
	else{
		std::cout<<-1;
	}
}