#include<iostream>
int main(){
	int n,nowX=1,nowY=1,x,y,z,bol=0;
	std::cin>>n;
	for(int i=0;i<n;i++){
		std::cin>>x>>y>>z;
		nowX*=x;
		nowY*=y;
		bol+=z;
		
	}
	std::cout<<bol%2<<' '<<nowY/nowX;
}
