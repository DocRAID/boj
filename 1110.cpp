#include<iostream>
int cnt = 0;
int cycle(int n){
	cnt++;
	int n1,n2;
	if(n<10){
		n2=(n*10)%10;
	}
	n1=n%10;
	n2=(n%10+n/10)%10;
	return (n1*10)+n2;
}
int main(){
	int input,n;
	std::cin>>input;
	n=cycle(input);
	for(;1;){
		if(n==input){
			break;
		}
		n=cycle(n);
	}
	std::cout<<cnt;
}