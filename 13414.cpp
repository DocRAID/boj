#include<iostream>
#include <vector>
#include <algorithm>
#include <map>
int main() {
	std::ios_base :: sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int n,m;
	std::map<std::string,int> mp;
	std::vector<std::string> arr;
	std::cin>>m>>n;
	for(int i=0;i<n;i++){
		std::string input;
		std::cin>>input;
		arr.push_back(input);
		mp[arr[i]]=i;
	}
	int cnt=0;
	if(m>=mp.size()){
		m=mp.size();
	}
	for(int i=0;1;i++){
		if(cnt==m){
			break;
		}
		if(mp[arr[i]]==i){
			std::cout<<arr[i]<<'\n';
			cnt++;
		}
	}

}

