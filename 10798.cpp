#include<iostream>
#include<string.h>
using std::string;
int main(){
	int max=0;
	char arr[5][15];
	for(int i=0;i<5;i++){
		std::cin>>arr[i];
		if(max<strlen(arr[i])){
			max=strlen(arr[i]);
		}
	}
	for(int i=0;i<max;i++){
		for(int j=0;j<5;j++){
			if(strlen(arr[j])>i){
				std::cout<<arr[j][i];
			}
		}
	}
}