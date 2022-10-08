#include<iostream>
#include<string.h>
int main(){
	int n,score=0;
	char test[90]={};
	std::cin>>n;
	
	for(int i=0;i<n;i++){
		std::cin>>test;
		int bonus=1;
		for(int j=0;j<strlen(test);j++){
			if(test[j]=='O'){
				score+=bonus;
				bonus++;
			}
			else{
				bonus=1;
			}
		}
		std::cout<<score<<'\n';
		score=0;
	}
}