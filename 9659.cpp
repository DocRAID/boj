#include<iostream>
#include<string>
int main(){
	int n;
	std::string input;
	std::cin>>input;
	n=std::stoi(&input[input.length()-1]);
	if(n%2==0){
		std::cout<<"CY";
	}
	else{
		std::cout<<"SK";
	}
}