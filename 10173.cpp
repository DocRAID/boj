#include<iostream>
#include<string>
#include<algorithm>
int main(){
	int n;
	std::string input;
	for(;std::getline (std::cin,input)&&input!="EOI";){
		bool istrue=false;
		transform(input.begin(),input.end(),input.begin(), ::tolower);
		for(int i=0;i<input.length();i++){
			if(input[i]=='n'){
				if(input[i+1]=='e'&&input[i+2]=='m'&&input[i+3]=='o'){
					istrue=true;
				}	
			}
		}
		istrue?std::cout<<"Found\n":std::cout<<"Missing\n";
	}
}