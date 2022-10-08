#include<iostream>
#include<map>
int main(){
	int n;
	std::map<int,std::string>mp;
	std::cin>>n;
	for(int i=0;i<n;i++){
		std::string input;
		int num;
		std::cin>>input>>num;
		mp.insert({num,input});
	}
	for(auto i:mp){
		std::cout<<i.second;
		break;
	}
}