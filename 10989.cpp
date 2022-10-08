#include<iostream>
#include<map>
#include<algorithm>
int main(){
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	int n,input;
	std::cin>>n;
	std::map<int,int>v;
	for(int i=0;i<n;i++){
		std::cin>>input;
		v[input]++;
	}
	for(auto i:v){
		for(int j=0;j<i.second;j++){
			std::cout<<i.first<<"\n";
		}
	}
	
}