#include<iostream>
int prime[10000000],x,y;
int main(){
	prime[0]=prime[1]=1;
	std::cin>>x>>y;
	for(int i=2;i<y;i++){
		for(int j=2;j*i<=y;j++){
			prime[i*j]=1;
		}
	}
	for(int i=x;i<=y;i++){
		if(prime[i]==0){
			std::cout<<i<<'\n';
		}
	}
	
}