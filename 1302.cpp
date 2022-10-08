#include<iostream>
#include<map>
using std::string;
std::map<string,int> mp;
int main(){
	int n;
	std::cin>>n;
	for(int i=0;i<n;i++){
		string tmp;
		std::cin>>tmp;
		mp[tmp]+=1;
	}
	int max=0;
	string mxindex;
	for(auto i:mp){
		if(max<i.second) {
			mxindex=i.first;
			max=i.second;
		}
	}
	std::cout<<mxindex;
	
}