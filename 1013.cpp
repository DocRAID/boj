#include<iostream>
#include<regex>
void func() {
	std::string input;
	std::cin>>input;
	std::regex patt("(100+1+|01)+");
	if(std::regex_match(input,patt)){
		std::cout<<"YES\n";
	}
	else{
		std::cout<<"NO\n";
	}
}
int main() {
	int n;
	std::cin>>n;
	for(int i=0;i<n;i++){
		func();
	}
}