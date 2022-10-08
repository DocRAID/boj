#include<iostream>
#include<vector>
void c_to_java(std::string input){
	std::vector<char> v;
	bool is=false;
	for(auto i:input){
		if(i=='_'){
			if(is){
				std::cout<<"Error!";
				return;
			}
			is=true;
		}
		else{
			if(is){
				is=false;
				v.push_back(i-('a'-'A'));
			}
			else{
				v.push_back(i);
			}
		}
	}
	for(auto i:v){
		std::cout<<i;
	}
}
void java_to_c(std::string input){
	std::vector<char> v;
	for(auto i:input){
		if(i>='A'&&i<='Z'){
			v.push_back('_');
			v.push_back(i+('a'-'A'));
		}
		else{
			v.push_back(i);
		}
	}
	for(auto i:v){
		std::cout<<i;
	}
}
void discern(std::string input){
	bool under=false,big=false,double_under=false;
	for(auto i:input){
		if(i=='_'){
			// std::cout<<"나 언더바 봄"<<'\n';
			under=true;
		}
		if(i>='A'&&i<='Z'){
			// std::cout<<"나 대문자 봄"<<'\n';
			big=true;
		}
	}
	if((input[0]>='A'&&input[0]<='Z')||input[input.length()-1]=='_'||input[0]=='_'||(under&&big)){
		std::cout<<"Error!";
	}
	else if(under||!big){
		// std::cout<<"이거 C임"<<'\n';
		c_to_java(input);
	}
	else{
		// std::cout<<"이거 JAVA임"<<'\n';
		java_to_c(input);
	}
}
int main(){
	std::string input;
	std::cin>>input;
	discern(input);
}