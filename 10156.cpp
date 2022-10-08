#include<iostream>
int main(){
	long long a,b,c;
	std::cin>>a>>b>>c;
	a=a*b;
	if(a<c){
		a=c=0;
	}
	std::cout<<a-c;
}