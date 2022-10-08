#include<iostream>
#include<map>
int m,n,arr[10];
std::map<int,int>mp;
void DFS(int cnt,int min){
	if(cnt==m){
		for(int i=0;i<cnt;i++){
			std::cout<<arr[i]<<' ';
		}
		std::cout<<'\n';
		return;
	}
	for(auto &i:mp){
		if(i.second>0&&i.first>=min){
			arr[cnt]=i.first;
			i.second-=1;
			DFS(cnt+1,i.first);
			i.second+=1;
		}
	}
}
int main(){
	std::cin>>n>>m;
	int input;
	for(int i=0;i<n;i++){
		std::cin>>input;
		mp[input]+=1;
	}
	DFS(0,0);
}