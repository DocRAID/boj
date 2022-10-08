#include<iostream>
#include<cmath>
int main(){
	int a,b,c;
	int n;
	std::cin>>n;
	for(int i=0;i<n;i++){
		std::cin>>a>>b;
		c=a;
		a%=10;
		for(int j=1;j<b;j++){
			a*=c;
			a%=10;
		}
		if(a==0){
			std::cout<<10<<'\n';
		}
		else{
			std::cout<<a<<'\n';	
		}
	}
}