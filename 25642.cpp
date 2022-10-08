#include<iostream>
int main() {
	int n,m;
	std::cin>>n>>m;
	for(;1;){
		m+=n;
		if(m>=5){
			std::cout<<"yt";
			return 0;
		}
		n+=m;
		if(n>=5){
			std::cout<<"yj";
			return 0;
		}
	}
}