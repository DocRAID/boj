#include<iostream>
int main(){
	int n,a,b;
	std::cin>>n>>a;
	for(int i=1;i<=n;i++){
		std::cin>>b;
		if(b<a){
			std::cout<<b<<" ";
		}
	}
}