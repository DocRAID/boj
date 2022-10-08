#include<iostream>
#include<map>
int main(void){
	std::map<int,int>mp;
	int n,input;
	std::cin>>n;
	for(int i=0;i<n;i++){
		std::cin>>input;
		mp[input]++;
	}
	std::cin>>n;
	std::cout<<mp[n];
}