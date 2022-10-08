#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
using std::string;

std::string s,t;

string A(string input){
	return input.substr(0,input.size()-1);
}
string B(string input){
	input = input.substr(0,input.size()-1);
	std::reverse(input.begin(),input.end());
	return input;
}
int main() {
	std::cin>>s>>t;
	for(;s.size()<=t.size();){
		if(t[t.size()-1]=='A'){
			t=A(t);
		}
		else{
			t=B(t);
		}
		// std::cout<<t<<'\n';
		if(!s.compare(t)){
			std::cout<<1;
			return 0;
		}
	}
	std::cout<<0;
}