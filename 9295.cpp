#include<iostream>
int main(){
	int n;
	std::cin>>n;
	int a,b;
	for(int i=1;i<=n;i++){
		std::cin>>a>>b;
		std::cout<<"Case "<<i<<": "<<a+b<<std::endl;
	}
}