#include<iostream>
#include<cmath>
int input;
int five(int i){
	return pow(i,5);
}
int main(){
	int total=0;
	std::cin>>input;
	for(int i=0;i<5;i++){
		total+=five(input%10);
		input/=10;
	}
	std::cout<<total;
}