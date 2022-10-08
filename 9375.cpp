#include<iostream>
#include<map>
int main(){
	int testCase;
	std::cin>>testCase;
	for(int i=0;i<testCase;i++){
		std::map<std::string,int> mp;
		int n;
		std::cin>>n;
		for(int j=0;j<n;j++){
			std::string str1,str2;
			std::cin>>str1>>str2;
			mp[str2]++;
		}
		int cnt=1;
		for(auto i:mp){
			cnt*=i.second+1;
		}
		std::cout<<cnt-1<<'\n';
	}
}