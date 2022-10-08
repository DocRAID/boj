#include<iostream>
#include <algorithm>
#include <string>
int main(){
	std::string a;
	int max=0;
	for(;1;){
		std::string input;
		std::cin>>input;
		if(input=="E-N-D"){
			break;
		}
		int length = 0;
		std::string txt="";
		for(auto i:input){
			if((i>='a'&&i<='z')||(i>='A'&&i<='Z')||i=='-'){
				length++;
				if(i>='A'&&i<='Z'){
					txt.push_back(tolower(i));
				}
				else{
					txt.push_back(i);
				}
			}
		}

		if(max<length){
			max=length;
			a=txt;
		}
	}
	std::cout<<a<<'\n';
}