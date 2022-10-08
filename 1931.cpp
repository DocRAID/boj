#include<iostream>
#include<vector>
#include<algorithm>
bool comp(std::pair<int,int>a,std::pair<int,int>b){
	if(a.second<b.second) return true;
	else if(a.second==b.second) return a.first<b.first;
	else return false;
}
int main(){
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	int n;
	std::cin>>n;
	std::vector<std::pair<int,int> >vt;
	for(int i=0;i<n;i++){
		int a,b;
		std::cin>>a>>b;
		vt.push_back({a,b});
	}
	
	sort(vt.begin(),vt.end(),comp);
	
	int index=0,cnt=0;
	for(auto i:vt){
		if(index<=i.first){
			index=i.second;
			cnt++;
		}
	}
	std::cout<<cnt;
}