#include<iostream>
#include<map>
std::map<long long,int> mp;
int main(){
	int n;
	std::cin>>n;
	for(int i=0;i<n;i++){
		long long tmp;
		std::cin>>tmp;
		mp[tmp]+=1;
	}
	long long max=0,mxindex;
	for(auto i:mp){
		if(max<i.second) {
			mxindex=i.first;
			max=i.second;
		}
	}
	std::cout<<mxindex;
	
}