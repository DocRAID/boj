#include<iostream>
#include<vector>
#include<algorithm>
std::vector<std::pair<int, int> >ve;
int main(){
	int n,x,y;
	std::cin>>n;
	for(int i=0;i<n;i++){
		std::cin>>x>>y;
		ve.push_back({x,y});
	}
	sort(ve.begin(),ve.end());
	for(int i=0;i<n;i++){
		std::cout<<ve[i].first<<" "<<ve[i].second<<"\n";
	}
}