#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
int main(){
	std::priority_queue<int, std::vector<int>, std::greater<int>>qu;
	std::vector<std::pair<int,int>>vt;
	int n;
	std::cin>>n;
	for(int i=0;i<n;i++){
		int a,b;
		std::cin>>a>>b;
		vt.push_back({b,a});
	}
	std::sort(vt.begin(),vt.end());
	for(auto i:vt){
		qu.push(i.second);
		if(qu.size()>i.first){
//			std::cout<<"poped!"<<qu.top()<<'\n';
			qu.pop();
		}
//		std::cout<<i.first<<' '<<i.second<<'\n';
	}
	int sum=0;
	while(!qu.empty()){
//		std::cout<<qu.top()<<'\n';
		sum+=qu.top();
		qu.pop();
	}
	std::cout<<sum;
}