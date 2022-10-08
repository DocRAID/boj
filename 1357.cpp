#include<iostream>
int reverse(int in){
	int  reversed_number = 0,remainder;
	while(in != 0) {
	    remainder = in % 10;
	    reversed_number = reversed_number * 10 + remainder;
	    in /= 10;
	}
	return reversed_number;
}
int main(){
	int a,b;
	std::string x,y,tmp;
	std::cin>>a>>b;
	std::cout<<reverse(reverse(a)+reverse(b));
}