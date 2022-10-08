#include<iostream>
#include<cstdio>
#include<map>
#include<vector>
#include<algorithm>
bool comp(std::pair<std::string, int>& a, std::pair<std::string, int>& b){
	if(a.second==b.second){
		return a.first < b.first;
	}
	return a.second > b.second;
}
int main(){
	std::map<std::string,int>mp;
	int n;
	std::cin>>n;
	for(int i=0;i<n;i++){
		int min,sec;
		std::string name;
		scanf("%d:%d",&min,&sec);
		std::cin>>name;
		sec+=min*60;
		mp[name]+=sec;
	}
	for(auto& i:mp){
		if(i.second<=100){
			i.second=10;
		}
		else{
			bool dar=false;
			i.second-=100;
			if(i.second%50!=0){
				dar=true;
			}
			i.second/=50;
			i.second*=3;
			if(dar){
				i.second+=3;
			}
			i.second+=10;
		}
	}
	std::vector<std::pair<std::string, int>> v(mp.begin(), mp.end());
	std::sort(v.begin(), v.end(), comp);
	for(auto i:v){
		std::cout<<i.first<<' '<<i.second<<'\n';
	}
}