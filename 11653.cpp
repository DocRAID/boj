#include<iostream>
int main(){
	long long input;
	std::cin>>input;
	if(input==1){
		return 0;
	}
	for(int i=2;i<input;i++){
		if(input%i==0){
			while(input%i==0){
				input/=i;
				std::cout<<i<<'\n';
			}
		}
		if(input==1){
			return 0;
		}
	}
	if(input==1){
		return 0;
	}
	if(input!=0){
		std::cout<<input;
	}
}