#include<iostream>
bool arr[30];
int main(){
	int input;
	for(int i=0;i<28;i++){
		std::cin>>input;
		arr[input-1]=true;
	}
	for(int i=0;i<30;i++){
		if(arr[i]==false){
			std::cout<<i+1<<'\n';
		}
	}
}