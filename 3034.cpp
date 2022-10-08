#include<iostream>
int main(){
	int n,h,w;
	std::cin>>n>>h>>w;
	int index=h*h+w*w,input;
	for(int i=0;i<n;i++){
		std::cin>>input;
		input*=input;
		if(index>=input){
			std::cout<<"DA\n";
		}
		else{
			std::cout<<"NE\n";
		}
	}
}