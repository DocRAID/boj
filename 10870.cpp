#include<iostream>

int Fibonacci(int num){
	if(num==0){
		return 0;
	}
	else if(num<=2){
		return 1;
	}
	return Fibonacci(num-1)+Fibonacci(num-2);
}
int main(){
	int num;
	std::cin>>num;
	std::cout<<Fibonacci(num);
}