#include<iostream>
#include<string>
#include<regex>
int main() {
	int n;
	std::cin>>n;
	std::regex rex("[a-z]*l[a-z]l[a-z]*");
	for(int i=0;i<n;i++){
		std::string input;
		std::cin>>input;
		if(input.find("lol")!= std::string::npos){
			std::cout<<0<<'\n';
		}else if(input.find("ll")!= std::string::npos||input.find("lo")!= std::string::npos||input.find("ol")!= std::string::npos||std::regex_match(input,rex)){
			std::cout<<1<<'\n';
		}else if(input.find("l")!= std::string::npos||input.find("o")!= std::string::npos){
			std::cout<<2<<'\n';
		}else{
			std::cout<<3<<'\n';
		}
	}
}