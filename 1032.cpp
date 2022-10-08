#include<iostream>
#include<string.h>
int main(){
	char cmd[80][80]={0},index;
	int n;
	std::cin>>n;
	for(int i=0;i<n;i++){
		std::cin>>cmd[i];
	}
	for(int i=0;i<strlen(cmd[0]);i++){
		index=cmd[0][i];
		for(int j=0;j<n;j++){
			if(index !=cmd[j][i]){
				cmd[0][i]='?';
			}
		}
	}
	std::cout<<cmd[0];
	
}