#include<iostream>
#include<map>
using std::string;
int main(){
	int n,age;
	string name;
	std::multimap<int,string> member;
	std::cin>>n;
	
	for(int i=0;i<n;i++){
		std::cin>>age>>name;
		member.insert({age,name});
	}
	
	for(auto at:member){
		std::cout<<at.first<<" "<<at.second<<"\n";
	}
	
	
}