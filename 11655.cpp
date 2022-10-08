#include<iostream>
int main(){
	std::string input;
	std::getline(std::cin, input);
	for(int i=0;i<input.length();i++){
		if(input[i]>='a'&&input[i]<='z'){
			input[i]+=13;
			if(input[i]<'a'||input[i]>'z'){
				input[i]-=26;
			}
		}
		else if(input[i]>='A'&&input[i]<='Z'){
			input[i]+=13;
			if(input[i]<'A'||input[i]>'Z'){
				input[i]-=26;
			}
		}
	}
	for(int i=0;i<input.length();i++){
		std::cout<<input[i];
	}
}
