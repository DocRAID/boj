#include<iostream>
#include<set>
using std::string;
int main(){
	std::set<string>st;
	
	string input;
	std::cin>>input;
	for(int i=0;i<input.length();i++){
		st.insert(input.substr(i,input.length()));
	}
	for(auto i:st){
		std::cout<<i<<std::endl;
	}
}