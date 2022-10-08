#include<iostream>
#include<string>
using std::string;
int main(){
	int cnt=0;
	string input;
	for(int i=0;i<5;i++){
		std::cin>>input;
		for(int j=0;j<input.length()-2;j++){
			if(input[j]=='F'&&input[j+1]=='B'&&input[j+2]=='I'){
				std::cout<<i+1<<" ";
				cnt+=1;
				break;
			}
		}
	}
	if(!cnt){
		std::cout<<"HE GOT AWAY!";
	}
	
}