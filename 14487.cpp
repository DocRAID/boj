#include<iostream>
int main(){
	int n,cnt=0,max=0;
	std::cin>>n;
	for(int i=0;i<n;i++){
		int input;
		std::cin>>input;
		cnt+=input;
		max<input?max=input: 1 ;
	}
	std::cout<<cnt-max;
}