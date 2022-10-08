#include<iostream>
int main(){
	std::string input;
	std::cin>>input;
	for(int i=0;i<input.length();i++){
		if(input[i]=='X'&&input[i+1]=='X'&&input[i+2]=='X'&&input[i+3]=='X'){
			input[i]='A',input[i+1]='A',input[i+2]='A',input[i+3]='A';
			i+=3;
		}
		else if(input[i]=='X'&&input[i+1]=='X'){
			input[i]='B',input[i+1]='B';
			i+=1;
		}
		else if(input[i]=='X'){
			std::cout<<-1;
			return 0;
		}
	}
	std::cout<<input;
}