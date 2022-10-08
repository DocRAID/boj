#include<iostream>
int main(){
	int a,b,min,index=1;
	std::cin>>a>>b;
	a>b?min=b:min=a;
	for(int i=2;i<=min;i++){
		if(a%i==0&&b%i==0){
			index=i;
		}
	}
	std::cout<<index<<"\n"<<(a * b) /index;
	
}