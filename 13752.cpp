#include<iostream>
int main(){
	int n;
	std::cin>>n;
	for(int i=0;i<n;i++){
		int a;
		std::cin>>a;
		for(int j=0;j<a;j++){
			std::cout<<"=";
		}
		std::cout<<"\n";
	}
}