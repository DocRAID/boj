#include<iostream>
int main(){
	int n;
	std::cin>>n;
	for(int i=0;i<5*n;i++){
		if(i<n||i>=4*n){
			for(int j=0;j<5*n;j++){
				std::cout<<"@";
			}
		}
		else{
			for(int j=0;j<5*n;j++){
				if(j<n||j>=4*n){
					std::cout<<"@";
				}
				else{
					std::cout<<" ";
				}
			}
		}
		std::cout<<'\n';
	}
}