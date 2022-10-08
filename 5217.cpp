#include<iostream>
int main(){
	int n;
	std::cin>>n;
	for(int i=0;i<n;i++){
		int a;
		std::cin>>a;
		std::cout<<"Pairs for "<<a<<":";
		for(int j=1;j<a/2+1;j++){
			if(j<a-j){
				std::cout<<" "<<j<<" "<<a-j;
			}
			j++;
			if(j<a-j){
				std::cout<<',';
			}
			j--;
		}
		std::cout<<"\n";
	}
}