#include<iostream>
int main(){
	int n;
	std::cin>>n;
	for(int i=0;i<n;i++){
		std::string input;
		std::cin>>input;
		std::cout<<input[0]<<input[input.length()-1]<<'\n';
	}
}