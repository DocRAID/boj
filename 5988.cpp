#include<iostream>
int main() {
	int n;
	std::cin>>n;
	for(int i=0;i<n;i++){
		std::string input;
		std::cin>>input;
		
		int a=std::stoi(input.substr(input.length()-1,input.length()));
		std::cout<<(a%2==0?"even\n":"odd\n");
	}
}