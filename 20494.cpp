#include<iostream>
#include<string>
int main(){
	int n,cnt=0;
	std::string s;
	std::cin>>n;
	for(int i=0;i<n;i++){
		std::cin>>s;
		cnt+=s.length();
	}
	std::cout<<cnt;
}