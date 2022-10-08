#include<iostream>
#include<string>
int main() {
	long long n,m;
	std::cin>>n>>m;
	long long i,mess = (n/100)*100;
	for(i=1;i*m<mess;i++){
		
	}
	std::string str = std::to_string(i*m);
	std::cout<<str[str.length()-2]<<str[str.length()-1];
}