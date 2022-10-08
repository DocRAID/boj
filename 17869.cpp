#include<iostream>
int main(){
	long long input,cnt=0;
	std::cin>>input;
	if(input==1){
		std::cout<<0;
		return 0;
	}
	for(;1;){
		if(input%2==0){
			input/=2;
			cnt++;
		}
		else{
			input+=1;
			cnt++;
		}
		if(input==1){
			break;
		}
	}
	std::cout<<cnt;
}