#include<iostream>
int main() {
	std::string me;
	int n;
	std::cin>>me>>n;
	int cnt=0;
	for(int i=0;i<n;i++){
		std::string input;
		std::cin>>input;
		if(input==me){
			cnt++;
		}
	}
	std::cout<<cnt;
}