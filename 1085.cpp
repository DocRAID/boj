#include<iostream>
int main(){
	int x,y,w,h,minY=1000,minX=1000;
	std::cin>>x>>y>>w>>h;
	h-y>y ? minY=y : minY=h-y;
	w-x>x ? minX=x : minX=w-x;
	minX>minY ? std::cout<<minY : std::cout<<minX;
	
}