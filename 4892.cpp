#include<iostream>
int main(){
	int a;
	for(int i=1;1;i++){
		std::cin>>a;
		if(a==0){
			break;
		}
		a*=3;
		std::cout<<i;
		if(a%2==1){
			std::cout<<". odd ";
			a=(a+1)/2;
		}
		else{
			std::cout<<". even ";
			a/=2;
		}
		a*=3;
		a/=9;
		std::cout<<a<<"\n";
	}
}