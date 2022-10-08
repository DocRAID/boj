#include<iostream>
int main(){
	int a,b,c,n;
	std::cin>>a>>b>>c;
	if(b>=c){
		std::cout<<-1;
		return 0;
	}
	n=c-b;
	a=a/n;
	std::cout<<a+1;
}