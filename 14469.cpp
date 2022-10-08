#include<iostream>
#include<vector>
#include<algorithm>
int main(){
	std::vector<std::pair<int,int>>vt;
	int n;
	std::cin>>n;
	for(int i=0;i<n;i++){
		int a,b;
		std::cin>>a>>b;
		vt.push_back({a,b});
	}
	std::sort(vt.begin(),vt.end());
	int cnt=0;
	for(int i=0;i<n;i++){
		while(1){
			if(cnt>=vt[i].first){
				cnt+=vt[i].second;
				break;
			}
			cnt++;
		}
	}
	std::cout<<cnt;
}