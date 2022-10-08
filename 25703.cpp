#include<iostream>
int main() {
	int n;
	std::cin>>n;
	std::cout<<"int a;"<<'\n';
	std::cout<<"int *ptr = &a;"<<'\n';
	for(int i=2;i<=n;i++){
		std::cout<<"int ";
		for(int j=0;j<i;j++){
			std::cout<<"*";
		}
		std::cout<<"ptr"<<i<<" = &ptr";
		if(i==2){
			std::cout<<";\n";
		}else {
			std::cout<<i-1<<";\n";
		}
	}
}