#include<iostream>
int main(){
	double a=0.074196,b=0.124740,c=0.062370,total=0;
	int x,y,z;
	std::cin>>x>>y>>z;
	a*=x;
	b*=y;
	c*=z;
	
	total= a*2 + b*2 + c;
	printf("%.6f",total);
//	std::cout<<total;
}