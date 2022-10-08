#include<iostream>
int main(){
	char a;
	int index=0;
	for(int i=0;i<6;i++){
		std::cin>>a;
		if(a=='W'){
			index+=1;
		}
	}
	if(index>=5){
		std::cout<<1;
	}
	else if(index>=3){
		std::cout<<2;
	}
	else if(index>=1){
		std::cout<<3;
	}
	else{
		std::cout<<-1;
	}
}