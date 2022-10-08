#include<iostream>
#include<map>
int main(){
	std::ios_base :: sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	std::map<int,int>mp;
	int n;
	std::cin>>n;
	for(int i=0;i<n;i++){
		int input;
		std::cin>>input;
		mp[input]++;
	}
	std::cin>>n;
	for(int i=0;i<n;i++){
		int input;
		std::cin>>input;
		std::cout<<mp[input]<<' ';
	}
}