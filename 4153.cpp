#include<iostream>
int main(){
	int a,b,c;
	while(1){
		std::cin>>a>>b>>c;
		if(a==0 && b==0 && c==0){
			break;
		}
		if(c*c == (a*a)+(b*b) || a*a == (c*c)+(b*b) || b*b == (a*a)+(c*c) ){
			std::cout<<"right"<<std::endl;
		} 
		else{
			std::cout<<"wrong"<<std::endl;
		}
	}
}