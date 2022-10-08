#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
int main(){
	std::priority_queue<int, std::vector<int>, std::greater<int>>qu;
	std::vector<std::pair<int,int>>vt;
	int n,one,two;
	std::cin>>n;
	for(int i=0;i<n;i++){
		std::cin>>one>>two;
		vt.push_back({one,two});
	}
	std::sort(vt.begin(),vt.end());
	for(auto i:vt){
		qu.push(i.second);
		if(qu.size()>i.first){
			qu.pop();
		}
	}
	int cnt=0;
	while(!qu.empty()){
		cnt+=qu.top();
		qu.pop();
	}
	std::cout<<cnt;
}
