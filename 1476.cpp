#include<iostream>
int main(){
	int a,b,c,x=0,y=0,z=0,cnt=0;
	std::cin>>a>>b>>c;
	for(;(a!=x||b!=y)||c!=z;){
		x++;
		y++;
		z++;
		if(x>15){
			x=1;
		}
		if(y>28){
			y=1;
		}
		if(z>19){
			z=1;
		}
		cnt++;
	}
	std::cout<<cnt;
}