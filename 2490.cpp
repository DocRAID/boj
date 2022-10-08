#include<iostream>
int main(){
	for(int i=0;i<3;i++){
		int cnt=0,input;
		for(int j=0;j<4;j++){
			std::cin>>input;
			if(input==0){
				cnt++;
			}
		}
		switch(cnt){
			case 0:
				std::cout<<"E";
				break;
			case 1:
				std::cout<<"A";
				break; 
			case 2:
				std::cout<<"B";
				break; 
			case 3:
				std::cout<<"C";
				break; 
			case 4:
				std::cout<<"D";
				break; 
		}
		std::cout<<'\n';
	}
}