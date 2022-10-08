#include<iostream>
int main(){
	int n,min=101,sum=0,input;
	std::cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<7;j++){
			std::cin>>input;
			if(input%2==0){
				sum+=input;
				if(min>input){
					min=input;
				}
			}
		}
		std::cout<<sum<<" "<<min<<"\n";
		min=101;
		sum=0;
	}
}