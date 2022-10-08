#include<iostream>
int main(){
	int min=5001,input;
	std::cin>>input;
	for(int i=0;i<5001;i++){
		int n=input;
		n = n - 5*i;
		
		if(n<0) break;
		
		for(int j=0;j<5001;j++){
			if(n - 3*j < 0){
				break;
			}	
			else if(n - 3*j == 0){
				if(min>i+j){
					min= i+j;
				}
				break;
			}
		}
	}
	min==5001 ? std::cout<<-1: std::cout<<min;
}